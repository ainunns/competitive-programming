#include <iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int dp[n+1],a[n+1],pos[n+1];
	dp[0]=0; pos[0]=0;
	for(int i=1; i<=n; i++){
		scanf("%d",&a[i]);
		pos[a[i]]=i;
		dp[i]=dp[i-1]+1;
	}
	int ans=0,now=0;
	for(int i=1; i<=n; i++){
		int b;
		scanf("%d",&b);
		// printf("%d %d %d %d\n",pos[b],pos[now], );
		if(pos[b]>pos[now]){
			printf("%d ", dp[pos[b]]-dp[pos[now]]);
			now=b;
		} else
			printf("0 ");
	}
}