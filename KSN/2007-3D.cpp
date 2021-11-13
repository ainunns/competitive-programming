#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;
string s;
set<ll>ss;
ll n;
void f(ll idx,string nxt){
	if(idx>=n){
		ll res=0,bil=(s[0]-'0');
		vector<int>op,bi;
		for(int i=1; i<n-1; i++){
			if(nxt[i]=='*')
				bil=(10*bil)+(s[i]-'0');
			else if(nxt[i]=='+'){
				bi.push_back(bil);
				bil=(s[i]-'0');
				op.push_back(0);
			} else if(nxt[i]=='-'){
				bi.push_back(bil);
				bil=(s[i]-'0');
				op.push_back(1);
			}
		}
		if(nxt[n-1]=='*'){
			bil=(10*bil)+(s[n-1]-'0');
			bi.push_back(bil);
		} else if(nxt[n-1]=='+'){
			bi.push_back(bil);
			bil=0;
			op.push_back(0);
			bi.push_back(s[n-1]-'0');
		} else if(nxt[n-1]=='-'){
			bi.push_back(bil);
			bil=0;
			op.push_back(1);
			bi.push_back(s[n-1]-'0');
		}
		res=bi[0];
		int si=bi.size();
		// for(auto c: bi)
		// 	cout<<"bil "<<c<<"\n";
		for(int i=1; i<si; i++)
			if(op[i-1]==1)
				res-=bi[i];
			else
				res+=bi[i];
		// cout<<si<<" "<<nxt<<" "<<res<<endl;
		ss.insert(res);
	} else {
		f(idx+1,nxt);
		nxt[idx]='+';
		f(idx+1,nxt);
		nxt[idx]='-';
		f(idx+1,nxt);
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>s;
	n=s.length();
	string tmp="";
	for(int i=0; i<n; i++)
		tmp+='*';
	f(1,tmp);
	cout<<ss.size()<<"\n";
	// for(auto c:ss) cout<<c<<"\n";
}