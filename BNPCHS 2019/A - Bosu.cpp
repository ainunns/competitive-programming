//Bosu!
#include <bits/stdc++.h>
#define forn(i,a,b) for(long long i=a; i<=b; i++)
#define ford(i,a,b) for(long long i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long int t,n;
	scanf("%lld",&t);
	forn(i,1,t){
		scanf("%lld",&n);
		printf("Case #%lld: %lld\n",i,(n+1)*n/2);
	}
	return 0;
}
