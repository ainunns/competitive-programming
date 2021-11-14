//INTEST - Enormous Input Test
#include <bits/stdc++.h>
long long n,count=0,k,t[10000000];
int main(){
	scanf("%d %d",&n,&k);
	for(int i=0; i<n; i++){
		scanf("%lld",&t[i]);
		if(t[i]%k==0){
			count++;
		}
	}
	printf("%lld\n",count);
}
