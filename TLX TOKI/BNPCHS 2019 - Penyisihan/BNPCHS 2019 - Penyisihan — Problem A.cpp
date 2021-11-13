#include <cstdio>
int main(){
	int tc;
	scanf("%d",&tc);
	for(int i=1; i<=tc; i++){
		long long n;
		scanf("%lld",&n);
		printf("Case #%d: %lld\n", i,n*(n+1)/2);
	}
}
