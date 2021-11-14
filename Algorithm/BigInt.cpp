#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
typedef long long ll;
const ll N=3e5+5,MOD=1e9+7;
string tambah(string a,string b){
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
string kurang(string a,string b){
	string res="";
	bool tanda=false;
	
	return res;
}
string kali(string a,string b){
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
		res=tambah(res,tmp);
	}
	return res;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string a,b;
	cin>>a>>b;
	cout<<kali(a,b)<<endl;
}