//Total Path Count
#include <bits/stdc++.h>	
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	long long int n,m;
	cin>>n>>m;
	long long int dp[n][m]={0};
	forn(i,0,n-1) dp[i][0]=1;
	forn(j,0,m-1) dp[0][j]=1;
	forn(i,1,n-1)
		forn(j,1,m-1) dp[i][j]=dp[i-1][j]+dp[i][j-1];
	cout<<dp[n-1][m-1]<<"\n";
}
