//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int n,w,wt[1001],v[1001],dp[2001][2001],t;
void solve(){
	memset(dp,0,sizeof(dp));
	cin>>n>>w;
	forn(i,1,n) cin>>v[i];
	forn(i,1,n) cin>>wt[i];
	forn(j,0,w){
		forn(i,1,n){
			int best=dp[i-1][j];
			if(j>=wt[i]) best=max(best,dp[i-1][j-wt[i]]+v[i]);
			dp[i][j]=best;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin>>t;
	while(t--){
		solve();
	}
}
