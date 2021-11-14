#include <iostream>
#include <limits>
#define ll long long
using namespace std;
const ll MX=2e5;
ll dp[MX+1][2],a,b;
char s[MX+1];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d %lld %lld",&n,&a,&b);
		for(int i=0; i<=n; i++)
			for(int j=0; j<2; j++)
				dp[i][j]=1e17;
		dp[0][0]=b;
		scanf("%s",s);
		for(int i=1; i<=n; i++){
			if(s[i-1]=='1')
				dp[i][1]=min(dp[i][1],dp[i-1][1]+a+2*b);
			else if(s[i-1]=='0'){
				dp[i][0]=min(dp[i][0],min(dp[i-1][0]+a+b,dp[i-1][1]+2*a+b));
				dp[i][1]=min(dp[i][1],min(dp[i-1][1]+a+2*b,dp[i-1][0]+2*(a+b)));
			}
		}
		printf("%lld\n", dp[n][0]);
	}
}