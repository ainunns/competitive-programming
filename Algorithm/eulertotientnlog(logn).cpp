#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
typedef long long ll;
ll phi[2000000];
void solve(){
	ll n;
	cin>>n;
	forn(i,1,1000000) phi[i]=i;
	forn(i,2,1000000){
		if(phi[i]==i){
			for(int j=i; j<=1000000; j+=i) {
				phi[j]/=i;
				phi[j]*=(i-1);
			}
		}
	}
	ll m;
	cin>>m;
	while(m--){
		ll q;
		cin>>q;
		cout<<phi[q]<<endl;
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
	//cin>>t;
	while(t--) {
		solve();
	}
}
