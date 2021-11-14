#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int n,m,dp[20000],coin[101];
	scanf("%d %d",&n,&m);
	memset(dp,-1,sizeof(dp));
	for(int i=0; i<n; i++){
		scanf("%d",&coin[i]);
	}
	dp[0]=0; 
	for(int i=1; i<=m; i++){
		for(int j=0; j<n; j++){
			if(i>=coin[j]){
				dp[i]=max(dp[i],dp[i-coin[j]]+1);
			}
		}
	}
	printf("%d\n", dp[m]);
}