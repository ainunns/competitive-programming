//Barisan Bilangan
#include <bits/stdc++.h>
#include <cmath>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
long long fpb(long long x, long long y){
	if (y==0){
		return x;
	}else {
		return fpb(y,x%y);
	}
}
int main(){
	long long n,a,b,ka,kb,kab;
	scanf("%lld %lld %lld",&n,&a,&b);
	ka=(n/a);
	kb=(n/b);
	kab=(n/((a*b)/fpb(a,b)));
	printf("%lld\n",ka+kb-kab);
	return 0;
}

