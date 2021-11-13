//Nasty Hacks
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	long long n,r[101],e[101],c[101];
	scanf("%lld",&n);
	forn(i,1,n){
		scanf("%lld %lld %lld",&r[i],&e[i],&c[i]);
		if(e[i]-c[i]>r[i]){
			printf("advertise\n");
		} else if(e[i]-c[i]==r[i]){
			printf("does not matter\n");
		} else if(e[i]-c[i]<r[i]){
			printf("do not advertise\n");
		}
	}
}
