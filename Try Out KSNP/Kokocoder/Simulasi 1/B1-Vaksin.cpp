#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
typedef long long ll;
const ll MOD=1e9+7;
ll n,p,s[1001];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>n>>p;
	ll ans=0;
	forn(i,1,n) cin>>s[i];
	for(int i=1; i<(1ll<<n); i++){
		ll now=0;
		for(int j=0; j<n; j++){
			if(i&(1ll<<j))
				(now+=s[j])%=2;
		}
		(ans+=(now==p))%=MOD;
	}
	cout<<ans<<"\n";
}