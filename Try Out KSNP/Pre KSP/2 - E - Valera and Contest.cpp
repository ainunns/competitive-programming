#include <iostream>
using namespace std;
int main(){
	int n,k,l,r,sall,sk;
	scanf("%d %d %d %d %d %d",&n,&k,&l,&r,&sall,&sk);
	int sr=sall-sk,a[n]={0},idx=n-1;
	if(n>k){
		for(int i=0; i<sr%(n-k); i++)
			a[idx--]=(sr/(n-k))+1;
		for(int i=0; i<(n-k)-sr%(n-k); i++)
			a[idx--]=(sr/(n-k));
	}
	idx=0;
	for(int i=0; i<sk%k; i++)
		a[idx++]=(sk/k)+1;
	for(int i=0; i<k-sk%k; i++)
		a[idx++]=sk/k;
	for(int i=0; i<n; i++)
		printf("%d ", a[i]);
}