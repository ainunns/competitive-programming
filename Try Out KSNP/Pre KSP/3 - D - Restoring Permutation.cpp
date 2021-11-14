#include <iostream>
#define ll long long
using namespace std;
int main(){
	ll n,a,b,c,d;
	scanf("%lld %lld %lld %lld %lld",&n,&a,&b,&c,&d);
	ll ans=0;
	for(int i=1; i<=n; i++){
		ll A=a+b+i;
		ll B=b+d+i;
		ll C=d+c+i;
		ll D=a+c+i;
		ans+=max(0ll,min(min(A,B),min(C,D))+n-max(max(A,B),max(C,D)));
	}
	printf("%lld\n", ans);
}