#include <iostream>
#include <cstring>
#include <cmath>
#include <climits>
using namespace std;
typedef long long ll;
ll n,c,ct[1001],dp[1001][1001];
ll f(ll l,ll r){
	if(l>r)
		return 0;
	if(dp[l][r]!=-1)
		return dp[l][r];
	ll ret=INT_MAX;
	for(int i=l; i<=r; i++){
		ret=min(ret,ct[r+1]-ct[l-1]+f(l,i-1)+f(i+1,r));
	}
	return dp[l][r]=ret;
}
int main(){
	while(1){
		scanf("%lld",&n);
		if(n==0)
			return 0;
		ct[0]=0;
		scanf("%lld",&c);
		ct[c+1]=n;
		for(ll i=1; i<=c; i++)
			scanf("%lld",&ct[i]);
		memset(dp,-1,sizeof(dp));
		printf("The minimum cutting is %lld.\n", f(1,c));
	}
}