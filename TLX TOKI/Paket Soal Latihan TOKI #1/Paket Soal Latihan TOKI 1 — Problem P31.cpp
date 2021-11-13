#include <iostream>
using namespace std;
int dp[101][101];
int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	for(int i=0; i<n; i++)
		scanf("%d",&b[i]);
	for(int i=1; i<=n; i++)
		for(int j=1; j<=n; j++)
			if(a[i-1]==b[j-1])
				dp[i][j]=dp[i-1][j-1]+1;
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	printf("%d\n", dp[n][n]);
}