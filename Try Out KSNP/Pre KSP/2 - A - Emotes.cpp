#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
	ll n,m,k;
	scanf("%lld %lld %lld",&n,&m,&k);
	ll a[n];
	for(int i=0; i<n; i++)
		scanf("%lld",&a[i]);
	sort(a,a+n,greater<ll>());
	printf("%lld\n", (m/(k+1)*(a[0]*k+a[1]))+((m%(k+1))*a[0]));
}
