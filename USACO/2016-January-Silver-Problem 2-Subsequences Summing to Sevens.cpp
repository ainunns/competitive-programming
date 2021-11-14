//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
const ll N=2e+5;
ll a[N],n;
void solve(){
	cin>>n;
	int pref[7];
	int ans=0;
	memset(pref,-1,sizeof(pref));
	forn(i,1,n){
		ll x;
		cin>>x;
		a[i]=(a[i-1]+x)%7;
		if(pref[a[i]]==-1) pref[a[i]]=i;
		else ans=max(ans,i-pref[a[i]]);
	}
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("div7.in","r",stdin);
	freopen("div7.out","w",stdout);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}
