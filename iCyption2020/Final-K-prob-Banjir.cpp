//Problem Name
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;
int n,grid[2001][2001];
int dx[]={-1,0,1,0,-1,-1,1,1};
int dy[]={0,-1,0,1,-1,1,1,-1};
void ff(int x,int y){
	if(x>=1 && y>=1 && x<=n && y<=n && grid[x][y]==1){
		grid[x][y]=0;
		forn(i,0,7) ff(x-dx[i],y-dy[i]);
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	int ans=0;
	forn(i,1,n){
		forn(j,1,n) cin>>grid[i][j];
	}
	forn(i,1,n){
		forn(j,1,n){
			if(grid[i][j]==1){
				ans++;
				ff(i,j);
			}
		}
	}
	cout<<ans<<"\n";
	return 0;
}

