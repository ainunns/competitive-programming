//Kembali Lagi
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long turns=1,a,b,c,x,z;
	scanf("%lld %lld %lld %lld",&a,&b,&c,&x);
	z=x;
	z=((a*z)+b)%c;
	while(z!=x){
		z=((a*z)+b)%c;
		turns++;
	}
	printf("%lld\n",turns);
	return 0;
}

