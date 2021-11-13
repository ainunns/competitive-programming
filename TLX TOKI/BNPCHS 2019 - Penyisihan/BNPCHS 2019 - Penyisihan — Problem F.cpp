#include <cstdio>
#include <algorithm>
#define ll long long
#define fi first
#define se second
using namespace std;
int par[100001];
int fi(int x){
	if(x==par[x])
		return x;
	return par[x]=fi(par[x]);
}
int main(){
	int t;
	scanf("%d",&t);
	for(int tc=1; tc<=t; tc++){
		int n,m;
		scanf("%d %d",&n,&m);
		for(int i=1; i<=n; i++)
			par[i]=i;
		pair<ll, pair<int, int>>v[m];
		ll ans=0;
		for(int i=0; i<m; i++)
			scanf("%d %d %lld",&v[i].se.fi,&v[i].se.se,&v[i].fi);
		sort(v,v+m);
		for(auto c:v){
			int x=fi(c.se.fi),y=fi(c.se.se);
			if(x!=y){
				par[x]=par[y];
				ans+=c.fi;
			}
		}
		printf("Case #%d: %lld\n", tc,ans);
	}
}