#include <iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	int ans=1,cur=1;
	for(int i=0; i<n-1; i++){
		if(2*a[i]>=a[i+1])
			cur++;
		else{
			if(ans<cur)
				ans=cur;
			cur=1;
		}
	}
	if(ans<cur)
		ans=cur;
	printf("%d\n", ans);
}