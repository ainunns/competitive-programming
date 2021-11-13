//Batter Up
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int gcd(int x,int y){
	if(y==0){
		return x;
	} else{
		return gcd(y,x%y);
	}
}
int main(){
	int n,ab[101],div,val=0,count=0;
	double acc;
	scanf("%d",&n);
	div=n;
	forn(i,1,n){
		scanf("%d",&ab[i]);
		if(ab[i]==-1){
			div--;
		} else {
			count++;
		}
	}
	if(gcd(div,count)==1){
		acc=count/div;
		printf("%.16lf\n",acc);
	} else{
		
	}
}
