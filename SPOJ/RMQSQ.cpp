#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
ll a,st[100001][25];
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		scanf("%lld",&a);
		st[i][0]=a;
	}
	int lg[n+5];
	lg[1]=0;
	for(int i=2; i<=n; i++)
		lg[i]=lg[i/2]+1;
	for(int j=1; j<=20; j++){
		for(int i=0; i+(1<<j)<=n; i++)
			st[i][j]=min(st[i][j-1],st[i+(1<<(j-1))][j-1]);
	}
	int q;
	scanf("%d",&q);
	while(q--){
		int l,r;
		scanf("%d %d",&l,&r);
		int J=lg[r-l+1];
		printf("%lld\n", min(st[l][J],st[r-(1<<J)+1][J]));
	}
}