//Binary Search
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
long long binarysearch(long long arr[], long long l, long long r, long long x){
	long long mid=l+(r-l)/2;
	if(l<=r){
		if(arr[mid]<x){
			return binarysearch(arr,mid+1,r,x);
		} else if(arr[mid]>x){
			return binarysearch(arr,l,mid-1,x);
		}
		return mid;
	}
	return -1;
}
int main(){
	long long bil[100],n,k;
	scanf("%lld",&n);
	forn(i,1,n){
		scanf("%lld",&bil[i]);
	}
	scanf("%lld",&k);
	printf("%lld\n",binarysearch(bil,1,n,k));
	return 0;
}
