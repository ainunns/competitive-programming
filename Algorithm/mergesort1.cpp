//Merge Sort
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
void merge(int arr[],int al, int ar, int bl, int br){
	int size=br-al+1,temp[size],ti=0,ai=al,bi=bl;
	while((ai<=ar)&&(bi<=br)){
		if(arr[ai]<=arr[bi]){
			temp[ti]=arr[ai];
			ai++;
		} else {
			temp[ti]=arr[bi];
			bi++;
		} 
		ti++;
	}
	while(ai<=ar){
		temp[ti]=arr[ai];
		ai++;
		ti++;
	}
	while(bi<=br){
		temp[ti]=arr[bi];
		bi++;
		ti++;
	}
	forn(i,0,size-1){
		arr[al+i]=temp[i];
	}
}
void mergesort(int arr[],int l, int r){
	if(l<r){
		int mid=(l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		merge(arr,l,mid,mid+1,r);
	}
}
int main(){
	int bil[100],n;
	scanf("%d",&n);
	forn(i,0,n-1){
		scanf("%d",&bil[i]);
	}
	mergesort(bil,0,n-1);
	forn(i,0,n-1){
		printf("%d ",bil[i]);
	}
	return 0;
}
