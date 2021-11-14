#include <iostream>
#define LL __int128
using namespace std;
int main(){
	long long x,y,a,b,ans=0;
	scanf("%lld %lld %lld %lld",&x,&y,&a,&b);
	LL X=x,Y=y,A=a,B=b;
	while(X*A<X+B && X*A<Y){
		ans++;
		X*=A;
	}
	ans+=(long long)(Y-X-1)/B;
	printf("%lld\n", ans);
}