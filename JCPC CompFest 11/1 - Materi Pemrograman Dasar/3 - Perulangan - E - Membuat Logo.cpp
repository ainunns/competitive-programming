//Membuat Logo
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int n,m,l;
	scanf("%d %d %d",&n,&m,&l);
	forn(i,1,l){
		forn(j,1,m){
			printf("*");
		}
		printf("\n");
	}
	forn(i,1,(n-(2*l))){
		forn(j,1,m){
			if(j<=l){
				printf("*");
			} else {
				printf(".");
			}
		}
		printf("\n");
	}
	forn(i,1,l){
		forn(j,1,m){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

