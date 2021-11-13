#include <iostream>
#include <string>
#include <vector>
#define ll long long
using namespace std;
const int MX=1e5+5;
string sub,s;
ll k,q,n,l,r,h,top,cnt[2];
vector<int>a,b;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>sub>>s>>k>>q;
	ll len=s.size();
	a.push_back(0); b.push_back(0);
	for(int i=0; i<len; i++){
		cnt[s[i]-'A']++;
		if(s[i]=='A')
			a.push_back(i+1);
		else if(s[i]=='B')
			b.push_back(i+1);
	}
	n=k*len+1;
	top=cnt[1]*k+1;
	while(q--){
		cin>>l>>r;
		if(l<=top && top<=r)
			cout<<n;
		else if(r<top){
			int idx=r%cnt[1];
			if(idx==0)
				idx=cnt[1];
			cout<<((r+cnt[1]-1)/cnt[1]-1)*len+b[idx];
		} else if(l>top){
			int idx=(n-l+1)%cnt[0];
			if(idx==0)
				idx=cnt[0];
			cout<<((n-l+1+cnt[0]-1)/cnt[0]-1)*len+a[idx];
		}
		cout<<"\n";
	}
}