#include <iostream>
using namespace std;
int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1; i<=m; i++){
		int a=i,b=1;
		while(a>=1 && b<=n){
			if(k==1){
				printf("%d %d\n", b,a);
				return 0;
			}
			k--;
			a--;
			b++;
		}
	}
	for(int i=2; i<=n; i++){
		int a=i,b=m;
		while(a<=n && b>=1){
			if(k==1){
				printf("%d %d\n", a,b);
				return 0;
			}
			k--;
			a++;
			b--;
		}
	}
}