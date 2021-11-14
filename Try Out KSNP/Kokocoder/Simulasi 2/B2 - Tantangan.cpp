#include <cstdio>
const int MX=3e5+5;
int fwt[MX],n,a[MX],mx;
void upd(int i,int va){
	for(; i<=mx; i+=(i&-i)){
		fwt[i]+=va;
	}
}
int query(int x){
	int sum=0;
	for(; x; x-=(x&-x)){
		sum+=fwt[x];
	}
	return sum;
}
int main(){
	scanf("%d",&n);
	mx=-1;
	int l[n],r[n];
	for(int i=0; i<n; i++){
		scanf("%d %d",&l[i],&r[i]);
		r[i]--;
		if(mx<r[i])
			mx=r[i];
	}
	for(int i=0; i<n; i++){
		if(l[i]<=r[i]){
			upd(r[i],1);
			if(l[i]>1)
				upd(l[i]-1,-1);
		}
	}
	int ans=0;
	for(int i=1; i<=mx; i++){
		int res=query(i);
		printf("%d %d\n", i,res);
		if(ans<res)
			ans=res;
	}
	printf("%d\n", ans);
}