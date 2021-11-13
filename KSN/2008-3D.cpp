//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
bool vis[505][505];
int n,m,k,s,I,J,hx,hy,dist[505][505];
int dr[]={1,2,2,1,-1,-2,-2,-1},dc[]={2,1,-1,-2,-2,-1,1,2};
bool inGrid(int x,int y){
	return x>=1 && x<=n && y>=1 && y<=m;
}
void solve(){
	cin>>n>>m>>k>>s>>I>>J;
	forn(i,1,n)
		forn(j,1,m)
			dist[i][j]=1e9;
	forn(i,1,k){
		cin>>hx>>hy;
		queue<pair<int, int>>q;
		q.push({hx,hy});
		dist[hx][hy]=0;
		while(!q.empty()){
			int x,y;
			tie(x,y)=q.front();
			q.pop();
			forn(i,0,7){
				int a=x+dr[i],b=y+dc[i];
				if(inGrid(a,b)){
					if(dist[a][b]<=dist[x][y]+1)
						continue;
					dist[a][b]=dist[x][y]+1;
					q.push({a,b});
				}
			}
		}
	}
	if(dist[I][J]<=s)
		cout<<"TRUE\n";
	else
		cout<<"FALSE\n";
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin>>t;
	forn(i,1,t){
		solve();
	}
}