#include <iostream>
#include <vector>
#include <queue>
#define ll long long
using namespace std;
int main(){
	ll n,k;
	scanf("%lld %lld",&n,&k);
	priority_queue<ll>pq;
	for(int i=31; i>=0; i--){
		if((n&(1<<i)))
			pq.push(1<<i);
	}
	if(pq.size()>k){
		puts("NO");
		return 0;
	}
	while(true){
		if(pq.size()==k){
			puts("YES");
			while(!pq.empty()){
				printf("%lld ", pq.top());
				pq.pop();
			}
			return 0;
		}
		if(pq.top()==1 && pq.size()<k){
			puts("NO");
			return 0;
		}
		ll now=pq.top();
		pq.pop();
		pq.push(now/2);
		pq.push(now/2);
	}
}