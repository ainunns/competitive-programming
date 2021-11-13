#include <iostream>
#include <vector>
#include <algorithm>
#define fi first
#define se second
using namespace std;
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	pair<int, int>a[n];
	int b[n],c[n];
	for(int i=0; i<n; i++){
		scanf("%d %d",&a[i].fi,&a[i].se);
		b[i]=a[i].fi;
		c[i]=a[i].se;
	}
	sort(b,b+n);
	sort(c,c+n);
	long long ans=0;
	for(int i=0; i<n; i++){
		long long l=0,r=n-1,mi,i1=-1;
		while(l<=r){
			mi=l+(r-l)/2;
			if(a[i].fi>c[mi]){
				i1=mi;
				l=mi+1;
			} else
				r=mi-1;
		}
		l=0,r=n-1;
		long long i2=n;
		while(l<=r){
			mi=l+(r-l)/2;
			if(a[i].se<b[mi]){
				i2=mi;
				r=mi-1;
			} else
				l=mi+1;
		}
		printf("%lld\n", i2-i1-2);
	}
}