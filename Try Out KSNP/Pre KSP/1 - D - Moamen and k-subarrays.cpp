#include <iostream>
#include <algorithm>
#define fi first
#define se second
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,k;
		scanf("%d %d",&n,&k);
		pair<int, int>a[n];
		for(int i=0; i<n; i++){
			scanf("%d",&a[i].fi);
			a[i].se=i;
		}
		sort(a,a+n);
		int ans=1;
		for(int i=1; i<n; i++)
			ans+=(a[i-1].se+1!=a[i].se);
		if(ans<=k)
			puts("Yes");
		else
			puts("No");
	}
}
