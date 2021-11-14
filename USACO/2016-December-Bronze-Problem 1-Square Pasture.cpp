//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(ll i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
void solve(){
	ll xmi=INT_MAX,xma=INT_MIN,ymi=xmi,yma=xma;
	forn(i,0,1){
		ll a,b,c,d;
		cin>>a>>b>>c>>d;
		xmi=min(xmi,a);
		xmi=min(xmi,c);
		xma=max(xma,a);
		xma=max(xma,c);
		ymi=min(ymi,b);
		ymi=min(ymi,d);
		yma=max(yma,b);
		yma=max(yma,d);
	}
	ll len=max(abs(xma-xmi),abs(yma-ymi));
	cout<<len*len<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("square.in","r",stdin);
	freopen("square.out","w",stdout);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}
