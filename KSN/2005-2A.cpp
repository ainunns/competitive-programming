//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define fi first
#define se second
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
//before solving problems, please read line 17-20
//jgn lupa dicomment line 17-20 nya
const int MX=3e5+5;
string add(string a,string b){
	string res="";
	if(a.length()<b.length()) swap(a,b);
	int r1=a.length(),r2=b.length(),mi=min(r1,r2);
	r1--;r2--;
	int sis=0;
	forn(i,1,mi){
		int nxt=sis+a[r1--]-'0'+b[r2--]-'0';
		int fi=nxt/10,se=nxt%10;
		res=(char)(se+48)+res;
		sis=fi;
	}
	while(r1>=0){
		int nxt=sis+a[r1--]-'0';
		int fi=nxt/10,se=nxt%10;
		res=(char)(se+48)+res;
		sis=fi;
	}
	if(sis!=0) res=(char)(sis+48)+res;
	return res;
}
string times(string a,string b){
	string res="";
	if(a.length()<b.length()) swap(a,b);
	int r1=a.length(),r2=b.length();
	ford(i,r2-1,0){
		string tmp="";
		forn(j,1,r2-i-1) tmp+='0';
		int sis=0;
		ford(j,r1-1,0){
			int now=(b[i]-'0')*(a[j]-'0')+sis;
			int fi=now/10,se=now%10;
			tmp=(char)(se+'0')+tmp;
			sis=fi;
		}
		if(sis>0) tmp=(char)(sis+'0')+tmp;
		res=add(res,tmp);
	}
	if(res[0]=='0') res="0";
	return res;
}
void solve(){
	string s,now="";
	vector<string>val;
	while(getline(cin,s)){
		if(s==""){
			val.push_back(now);
			now="";
		} else {
			if(s[0]=='0') now="0";
			else if(s[0]=='.') now=add(now,to_string(s.length()));
			else if(s[0]=='-') now=add(now,"5");
		}
	}
	val.push_back(now);
	reverse(val.begin(), val.end());
	int si=(int)val.size();
	si--;
	string po="1",ans="";
	forn(i,0,si){
		ans=add(ans,times(val[i],po));
		if(i==1) po=times(po,"18");
		else po=times(po,"20");
		// cout<<ans<<"\n"; 
	}
	cout<<ans<<"\n";
	/*
		winners focus on winning,
		losers focus on winners
	*/
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	// freopen("in.in","r",stdin);
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}