//Jumlahin Jumlahnya Faktor
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int g(int x){
	int count=0;
	forn(i,1,1000){
		if(x%i==0){
			count++;
		}
	}
	return count;
}
int main(){
	int sum=0,x;
	scanf("%d",&x);
	forn(i,1,x){
		sum+=g(i);
	}
	printf("%d\n",sum);
	return 0;
}
