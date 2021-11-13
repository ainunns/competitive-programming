#include <cstdio>
int main(){
	int tc;
	scanf("%d",&tc);
	for(int i=1; i<=tc; i++){
		int n;
		scanf("%d",&n);
		int ans=100;
		while(n){
			if(n&1)
				ans--;
			n/=2;
		}
		printf("Case #%d: %d\n", i,ans);
	}
}