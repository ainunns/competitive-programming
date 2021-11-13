#include <iostream>
#define ll long long
using namespace std;
ll cx[5005],cy[5005];
int main(){
	int n;
	scanf("%d",&n);
	int x[n],y[n];
	for(int i=0; i<n; i++){
		scanf("%d %d",&x[i],&y[i]);
		cx[x[i]]++;
		cy[y[i]]++;
	}
	ll ans=0;
	for(int i=0; i<n; i++){
		ans+=(cx[x[i]]-1)*(cy[y[i]]-1);
	}
	printf("%lld\n", ans);
}