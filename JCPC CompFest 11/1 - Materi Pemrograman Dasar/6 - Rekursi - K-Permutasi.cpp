//K-Permutasi
#include <bits/stdc++.h>
#include <cmath>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
bool pernah[10];
int n,k,catat[10],bnyksel;
void tulis(int kedalaman){
	if(kedalaman > n){
		bnyksel=0;
		forn(i,2,n){
			if(abs(catat[i]-catat[i-1])<=k){
				bnyksel++;
			}
		}
		if(bnyksel==(n-1)){
			forn(i,1,n-1){
					printf("%d ",catat[i]);
			}
			printf("%d\n",catat[n]);
		}
	} else {
		forn(i,1,n){
			if(!pernah[i]){
				pernah[i]=true;
				catat[kedalaman]=i;
				tulis(kedalaman+1);
				pernah[i]=false;
			}
		}
	}
}
int main(){
	scanf("%d %d",&n,&k);
	tulis(1);
	return 0;
}

