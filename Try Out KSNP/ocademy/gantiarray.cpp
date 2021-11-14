#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	long long n,langkah=0;
	scanf("%lld",&n);
	int arr[10],srt[10];
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
		srt[i]=arr[i];
	}
	for(int i=0; i<n; i++){
		sort(srt,srt+n);
		int med=srt[4];
		if(arr[i]>med) continue;
		else {
			langkah+=med-arr[i];
			arr[i]=med;
			for(int j=0; j<n; j++) srt[j]=arr[j];
		}
	}
	printf("%lld\n", langkah);
}