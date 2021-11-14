#include <iostream>
#define ll long long
using namespace std;
ll f(ll a,ll b){
	return (a-b)*(a-b);
}
int main(){
	int n;
	scanf("%d",&n);
	ll a[n+1],dp[n+1];
	for(int i=1; i<=n; i++)
		scanf("%lld",&a[i]);
	dp[0]=dp[1]=0;
	dp[2]=f(a[2],a[1]);
	for(int i=3; i<=n; i++){
		dp[i]=min(dp[i-1]+f(a[i],a[i-1]),dp[i-2]+3*f(a[i],a[i-2]));
		dp[i]=min(dp[i],dp[i-1]+3*f(a[i],a[i-2])+f(a[i-1],a[i-2]));
	}
	printf("%lld\n", dp[n]);
}