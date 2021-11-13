#include <cstdio>
#define ll long long
const ll MOD=1000003;
ll f(ll a,ll b){
	ll res=1;
	while(b){
		if(b&1)
			(res*=a)%=MOD;
		b/=2;
		(a*=a)%=MOD;
	}
	return res;
}
int main(){
	int tc;
	scanf("%d",&tc);
	for(int i=1; i<=tc; i++){
		ll n;
		scanf("%lld",&n);
		printf("Case #%d: %lld\n", i,(f(n+1,n)-1+MOD)%MOD);
	}
}