#include <iostream>
#include <cstring>
#include <map>
using namespace std;
const int MX=30000;
int bit[MX+1];
void upd(int i,int va){
	for(; i<=MX; i+=(i&-i))
		bit[i]+=va;
}
int query(int i){
	int sum=0;
	for(; i; i-=(i&-i))
		sum+=bit[i];
	return sum;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		map<string, int>ma;
		for(int i=1; i<=n; i++){
			char a[25];
			scanf("%s",a);
			ma[a]=i;
		}
		int a[n+1];
		for(int i=1; i<=n; i++){
			char b[25];
			scanf("%s",b);
			a[i]=ma[b];
		}
		memset(bit,0,sizeof(bit));
		int ans=0;
		for(int i=n; i>=1; i--){
			ans+=query(a[i]-1);
			upd(a[i],1);
		}
		printf("%d\n", ans);
	}
}