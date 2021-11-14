#include <iostream>
using namespace std;
int main(){
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n+1];
	a[0]=0;
	for(int i=0; i<n; i++){
		int b;
		scanf("%d",&b);
		a[i+1]=a[i]+b;
	}
	for(int i=0; i<k; i++){
		int b;
		scanf("%d",&b);
		int l=0,r=n,mi,ans=0;
		while(l<=r){
			mi=l+(r-l)/2;
			if(a[mi]<=b){
				ans=mi;
				l=mi+1;
			} else
				r=mi-1;
		}
		printf("%d", ans);
		if(i<k-1)
			printf(" ");
	}
	puts("");
}