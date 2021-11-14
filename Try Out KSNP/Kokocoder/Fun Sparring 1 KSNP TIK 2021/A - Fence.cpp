#include <iostream>
using namespace std;
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a,dp[n+1];
	dp[0]=0;
	for(int i=0; i<n; i++){
		scanf("%d",&a);
		dp[i+1]=dp[i]+a;
	}
	int ans=1e9,idx=-1;
	for(int i=k; i<=n; i++){
		if(ans>dp[i]-dp[i-k]){
			ans=dp[i]-dp[i-k];
			idx=i-k+1;
		}
	}
	printf("%d\n", idx);
}