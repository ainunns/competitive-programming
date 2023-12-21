//Mengurutkan Harga
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main(){
	int n,a[101];
	scanf("%d",&n);
	forn(i,1,n){
		scanf("%d",&a[i]);
	}
	forn(i,1,n){
		forn(j,(i+1),n){
			if(a[i]>a[j]){
				swap(a[i],a[j]);
				printf("%d %d\n",i,j);
			}
		}
	}
	return 0;
}

