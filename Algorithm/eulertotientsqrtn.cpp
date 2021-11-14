#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
typedef long long ll;
ll etf(ll n){
	ll ans=n,tmp=n;
	for(int i=2; i*i<=n; i++){
		if(tmp%i==0){
			ans*=(i-1);
			ans/=i;
			while(tmp%i==0) tmp/=i;
		}
	}
	if(tmp!=1) {
		ans*=(tmp-1);
		ans/=tmp;
		tmp/=tmp;
	}
	return ans;
}
void solve(){
	ll n;
	cin>>n;
	cout<<etf(n)<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) {
		solve();
	}
}