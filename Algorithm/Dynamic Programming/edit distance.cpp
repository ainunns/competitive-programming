//Edit Distance
#include <bits/stdc++.h>	
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string a,b;
	cin>>a>>b;
	int x=a.length(),y=b.length(),dp[100][100];
	dp[0][0]=0;
	//a convert to b
	forn(i,0,x-1) dp[i+1][0]=dp[i][0]+1;
	forn(i,0,y-1) dp[0][i+1]=dp[0][i]+1;
	forn(i,1,x){
		forn(j,1,y){
			if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1];
			else dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
		}
	}
	cout<<dp[x][y]<<"\n";
}
