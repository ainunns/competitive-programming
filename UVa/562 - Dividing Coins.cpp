#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;
ll dp[101][50001],n,a[101],sum;
ll f(ll idx,ll cnt){
	if(idx>n)
		return 0;
	if(dp[idx][cnt]!=-1)
		return dp[idx][cnt];
	ll ret=INT_MAX;
	for(int i=idx; i<=n; i++){
		ret=min(ret,(sum-2*(cnt+a[i]+min(f(idx+1,cnt+a[i]),f(idx+1,cnt)))));
	}
	return dp[idx][cnt]=ret;
}	
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		sum=0;
		memset(dp,-1,sizeof(dp));
		for(int i=1; i<=n; i++){
			scanf("%lld",&a[i]);
			sum+=a[i];
		}
		printf("%lld\n", f(1,0));
	}
}
