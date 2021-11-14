//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define fi first
#define se second
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
//before solving problems, please read line 17-20
//jgn lupa dicomment line 17-20 nya
const int MX=3e5+5;
int h,w,grid[505][505],dp[505][505];
void solve(){
	freopen("gecko.in","r",stdin);
	freopen("gecko.out","w",stdout);
	cin>>h>>w;
	forn(i,1,h){
		forn(j,1,w) cin>>grid[i][j];
	}
	forn(i,1,w) dp[1][i]=grid[1][i];
	forn(i,2,h){
		forn(j,1,w){
			dp[i][j]=dp[i-1][j];
			if(j>1) dp[i][j]=max(dp[i][j],dp[i-1][j-1]);
			if(j<w) dp[i][j]=max(dp[i-1][j+1],dp[i][j]);
			dp[i][j]+=grid[i][j];
		}
	}
	// forn(i,1,h){
	// 	forn(j,1,w) cout<<dp[i][j]<<" ";
	// 	cout<<"\n";
	// }
	int ans=-1;
	forn(i,1,w) ans=max(ans,dp[h][i]);
	cout<<ans<<"\n";
	/*
		winners focus on winning,
		losers focus on winners
	*/
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}