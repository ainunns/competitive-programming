//Analisis Memori
#include <bits/stdc++.h>
#include <cmath>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
long long t(long long n){
	if(n>1){
		return 1+t(ceil(n*(0.5)))+t(floor(n*(0.5)));
	} else if(n==1){
		return 1;
	}
}
int main(){
	long long n;
	scanf("%lld",&n);
//	n=ceil(3*(0.5));
	printf("%lld\n",t(n));
	return 0;
}

