#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
typedef long long ll;
const ll MOD=1e9+7,MX=2e5+5;
ll n,vis[MX],dist[MX],k;
vector<pair<ll, ll>>v[MX];
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>n;
	forn(i,1,n-1){
		ll a,b,l;
		cin>>a>>b>>l;
		v[a].push_back({b,l});
		v[b].push_back({a,l});
	}
	cin>>k;
	while(k--){
		ll x;
		forn(i,1,n) dist[i]=INT_MAX;
		memset(vis,0,sizeof(vis));
		cin>>x;
		dist[x]=0;
		vis[x]=1;
		priority_queue<pair<ll, ll>,vector<pair<ll, ll>>,greater<pair<ll, ll>>>pq;
		pq.push({0,x});
		while(!pq.empty()){
			ll dis,node;
			tie(dis,node)=pq.top();
			pq.pop();
			for(auto c:v[node]){
				if(!vis[c.first]){
					vis[c.first]=1;
					dist[c.first]=min(dist[c.first],dist[node]+c.second);
					pq.push({dist[c.first],c.first});
				}
			}
		}
		ll ans=0;
		forn(i,1,n){
			ans+=dist[i];
		}
		cout<<ans;
		if(k>0) cout<<" ";
	}
	cout<<endl;
}