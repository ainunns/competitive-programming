//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
char subsoal[20];
ll N,M,toko[100][100],q,dx[]={-1,1,0,0},dy[]={0,0,1,-1};
bool vis[100][100];
vector<ll>ans;
void dfs(int x,int y,ll cost){
	// printf("join %d, %d :  %d\n",x,y,vis[x][y]);
	vis[x][y]=true;
	if(x==N && y==M){
		ans.push_back(cost);
		// printf("============\n");
		vis[x][y]=false;
		return;
	}
	forn(i,0,3){
		ll nx=dx[i]+x,ny=dy[i]+y;
		if(1<=nx && nx<=N && 1<=ny && ny<=M){
			if(vis[nx][ny]) continue;
			dfs(nx,ny,cost+toko[nx][ny]);
		}
	}
	// printf("exit %d, %d : %d\n",x,y,vis[x][y]);
	vis[x][y]=false;
}
int main(){
	scanf("%s",subsoal);
	scanf("%lld %lld",&N,&M);
	forn(i,1,N){
		forn(j,1,M) scanf("%lld",&toko[i][j]);
	}
	scanf("%lld",&q);
	dfs(1,1,toko[1][1]);
	sort(ans.begin(), ans.end());
	// for(auto c:ans) printf("%lld\n",c);
	while(q--){
		ll costmi,costma;
		scanf("%lld %lld",&costmi,&costma);
		ll le=(lower_bound(ans.begin(), ans.end(),costmi)-ans.begin());
		ll ri=lower_bound(ans.begin(), ans.end(),costma+1)-ans.begin();
		printf("%lld\n",ri-le);
	}
}