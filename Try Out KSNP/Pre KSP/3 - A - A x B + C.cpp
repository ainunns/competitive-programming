#include <iostream>
#define ll long long
using namespace std;
const int MX=1e6;
int sieve[MX+1];
int main(){
	for(ll i=1; i<=MX; i++)
		sieve[i]=1;
	for(ll i=2; i<=MX; i++)
		for(ll j=i; j<=MX; j+=i)
			sieve[j]++;
	ll n;
	scanf("%lld",&n);
	ll ans=0;
	for(int i=1; i<n; i++)
		ans+=sieve[i];
	printf("%lld\n", ans);
}