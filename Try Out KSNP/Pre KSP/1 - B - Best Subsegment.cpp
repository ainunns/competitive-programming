#include <iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[n+1],mx=-1;
	for(int i=1; i<=n; i++){
		scanf("%d",&a[i]);
		if(mx<a[i])
			mx=a[i];
	}
	int len=1,ans=1;
	for(int i=2; i<=n; i++){
		if(a[i]==a[i-1] && a[i]==mx)
			len++;
		else {
			if(ans<len)
				ans=len;
			len=1;
		}
	}
	if(ans<len)
		ans=len;
	printf("%d\n", ans);
}