//Cetvrta
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main(){
	int a[4],b[4];
	forn(i,0,2){
		scanf("%d %d",&a[i],&b[i]);
	}
	forn(i,0,2){
		forn(j,(i+1),2){
			if(b[i]>b[j]){
				swap(b[i],b[j]); swap(a[i],a[j]);
			}
			if((b[i]==b[j])&&(a[i]>a[j])){
				swap(a[i],a[j]);
			}
		}
	} //already sorted
	forn(i,0,1){
		if((b[i]==b[i+1])&&(i==0)){
			b[3]=b[2]; a[3]=a[1];
		} else if((b[i]==b[i+1])&&(i==1)){
			b[3]=b[0]; a[3]=a[2];
		}
	}
	printf("%d %d\n",a[3],b[3]);
}
