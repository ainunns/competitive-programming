//Menyusun Komik
#include <bits/stdc++.h>
#include <cmath>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
void swap(int &x, int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main(){
	int n,bil[1001],count=0,minindeks;
	scanf("%d",&n);
	forn(i,1,n){
		scanf("%d",&bil[i]);
	}
	forn(i,1,n){
		minindeks=i;
		forn(j,i+1,n){
			if(bil[j]<bil[minindeks]){
				minindeks=j;
			}
		}
		if(minindeks!=i){
			swap(bil[i],bil[minindeks]);
			count++;
		} 
	}
	printf("%d\n",count);
	return 0;
}

