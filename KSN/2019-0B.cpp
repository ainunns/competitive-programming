#include <iostream>
#include <queue>
#define ll long long
using namespace std;
const int MX=2e5+5;
ll n,p,q,h[MX],a,cnt[MX];
int main(){
	scanf("%lld %lld %lld",&n,&p,&q);
	for(int i=1; i<=n; i++)
		scanf("%lld",&h[i]);
	for(int i=1; i<=p; i++){
		scanf("%lld",&a);
		cnt[a]+=2;
	}
	for(int i=1; i<=q; i++){
		scanf("%lld",&a);
		cnt[a]--;
	}
	ll ans=0;
	priority_queue<ll>pq;
	for(int i=1; i<=n; i++){
		if(cnt[i]==1)
			pq.push(h[i]);		
		else if(cnt[i]==2)
			ans+=h[i];
	}
	ll si=pq.size();
	for(int i=0; i<si; i++){
		ans+=pq.top()*(i%2==0);
		pq.pop();
	}
	printf("%lld\n", ans);
}