#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>
#define ll long long
#define fi first
#define se second
using namespace std;
ll dp[100005];
vector<pair<int, ll>>v[100005];
int main(){
	int n;
	scanf("%d",&n);
	int mx=0;
	dp[0]=0;
	for(int i=1; i<=n; i++){
		int a,b;
		ll c;
		// assert(b<=10000);
		scanf("%d %d %lld",&a,&b,&c);
		v[b].push_back({a,c});
	}
	for(int i=1; i<=100003; i++){
		dp[i]=dp[i-1];
		for(auto c:v[i]){
			dp[i]=max(dp[i],dp[c.fi-1]+c.se);
		}
	}
	printf("%lld\n", dp[100003]);
}