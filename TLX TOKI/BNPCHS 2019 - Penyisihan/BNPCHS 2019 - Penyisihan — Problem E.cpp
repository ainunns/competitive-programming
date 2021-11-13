#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>
#include <climits>
#include <cstring>
#define fi first
#define se second
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	for(int tc=1; tc<=t; tc++){
		int n,m;
		scanf("%d %d",&n,&m);
		bool vis[n+1];
		int dis[n+1],deg[n+1];
		vector<int>v[n+1];
		vector<pair<int, int>>dg;
		memset(vis,0,sizeof(vis));
		memset(deg,0,sizeof(deg));
		memset(dis,-1,sizeof(dis));
		for(int i=1; i<=m; i++){
			int a,b;
			scanf("%d %d",&a,&b);
			deg[a]++;
			deg[b]++;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		int s,e;
		scanf("%d %d",&s,&e);
		priority_queue<pair<int, int>>p;
		for(int i=1; i<=n; i++)
			p.push({deg[i],-i});
		int order[n+1],idx=1;
		while(!p.empty()){
			pair<int, int>tp=p.top();
			p.pop();
			if(!vis[-tp.se] && deg[-tp.se]==tp.fi){
				for(auto c:v[-tp.se])
					if(!vis[c]){
						deg[c]--;
						p.push({deg[c],-c});
					}
				deg[-tp.se]=0;
				vis[-tp.se]=1;
				if(-tp.se==e)
					order[-tp.se]=INT_MAX;
				else
					order[-tp.se]=idx++;
			}
		}
		memset(vis,0,sizeof(vis));
		dis[s]=0;
		vis[s]=1;
		queue<pair<int, int>>bfs;
		bfs.push({s,0});
		while(!bfs.empty()){
			pair<int, int> a=bfs.front();
			bfs.pop();
			for(auto c:v[a.fi]){
				if(!vis[c] && (order[c]>a.se+1 || c==e)){
					vis[c]=1;
					dis[c]=dis[a.fi]+1;
					bfs.push({c,a.se+1});
				}
			}
		}
		printf("Case #%d: %d\n", tc,dis[e]);
	}
}