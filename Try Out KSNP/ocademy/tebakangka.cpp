#include <iostream>
using namespace std;
int main(){
	int n,x,arr[10001],cnt=0;
	scanf("%d %d",&n,&x);
	for(int i=1; i<=10000; i++) arr[i]=i;
	while(n--){
		int y;
		scanf("%d",&y);
		int l=0,r=x-1,mid,pos=-1;
		while(l<=r){
			cnt++;
			mid=(l+r)/2;
			if(arr[mid]==y){
				pos=mid;
				break;
			} else if(arr[mid]>y) r=mid-1;
			else if(arr[mid]<y) l=mid+1;
		}
		if(pos==-1){
			printf("KALAH\n");
			return 0;
		}
	}
	printf("%d MENANG\n",cnt);
}