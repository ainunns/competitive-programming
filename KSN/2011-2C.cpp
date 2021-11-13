#include <iostream>
#include <cmath>
#include <map>
#define ll long long
using namespace std;
ll n,m,sf[1000002],ans=-1,c[1000001];
int main(){
	scanf("%lld %lld",&n,&m);
	for(int i=0; i<n; i++){
		ll a;
		scanf("%lld",&a);
		c[a]++;
	}
	for(int i=m; i>=1; i--)
		sf[i]=sf[i+1]+(c[i]*i*1ll);
	ll sc=0,pf=0,mx=0;
	for(int i=1; i<=m; i++){
		sc+=c[i];
		pf+=c[i]*i*1ll;
		if(c[i])
			continue;
		if(sf[i]-(n-sc)*i+sc*i-pf>mx){
			mx=sf[i]-(n-sc)*i+sc*i-pf;
			ans=i;
		}
	}
	printf("%d\n", ans);
}