#include <iostream>
#include <cstring>
#define ll long long
using namespace std;
ll bit[10000001];
void upd(ll i,ll va){
	for(; i<=10000000; i+=(i&-i))
		bit[i]+=va;
}
ll query(ll i){
	ll sum=0;
	for(; i; i-=(i&-i))
		sum+=bit[i];
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		memset(bit,0,sizeof(bit));
		int n;
		scanf("%d",&n);
		ll a[n];
		for(int i=0; i<n; i++)
			scanf("%lld",&a[i]);
		ll ans=0;
		for(int i=n-1; i>=0; i--){
			ans+=query(a[i]-1);
			upd(a[i],1);
		}
		printf("%lld\n", ans);
	}
}