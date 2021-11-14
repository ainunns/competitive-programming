#include <cstdio>
const int MX=1e5+5;
int main(){
	int n;
	scanf("%d",&n);
	int l[n],r[n],mx=-1;
	for(int i=0; i<n; i++){
		scanf("%d %d",&l[i],&r[i]);
		r[i]--;
		if(l[i]<=r[i])
			if(mx<r[i])
				mx=r[i];
	}
	int col[mx+1]={0};
	for(int i=0; i<n; i++)
		for(int j=l[i]; j<=l[i]+2; j++)
			col[j]++;
	int ans=0;
	for(int i=1; i<=mx; i++){
		printf("%d %d\n", i,col[i]);
		if(ans<col[i])
			ans=col[i];
	}
	printf("%d\n", ans);
}