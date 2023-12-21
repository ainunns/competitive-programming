//Pemilihan Umum
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
long long gcd(long long x, long long y){
	if(y==0){
		return x;
	} else {
		return gcd(y,x%y);
	}
}
int main(){
	long long a,b;
	scanf("%lld %lld",&a,&b);
	printf("%lld\n",(a*b)/gcd(a,b));
	return 0;
}

