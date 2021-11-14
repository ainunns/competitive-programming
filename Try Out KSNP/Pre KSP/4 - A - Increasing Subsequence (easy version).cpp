#include <iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++)
		scanf("%d",&a[i]);
	string ans="";
	int l=0,r=n-1,lst=0;
	while(l<r){
		if(lst<a[l] && lst<a[r]){
			if(a[l]<a[r]){
				ans+='L';
				lst=a[l];
				l++;
			} else {
				ans+='R';
				lst=a[r];
				r--;
			}
		} else  if(lst<a[l]){
			ans+='L';
			lst=a[l];
			l++;
		} else if(lst<a[r]){
			ans+='R';
			lst=a[r];
			r--;
		}
	}
	if(lst<a[l])
		ans+='L';
	printf("%d\n%s\n", ans.size(),ans.c_str());
}