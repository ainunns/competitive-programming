#include <cstdio>
int main(){
	int tc;
	scanf("%d",&tc);
	for(int i=1; i<=tc; i++){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		long long ans=0,p=1;
		while(a && b){
			ans+=p*(((a%10)+(b%10))%10);
			p*=10;
			a/=10;
			b/=10;
		}
		ans+=a*p+b*p;
		printf("Case #%d: %lld\n", i,ans);
	}
}