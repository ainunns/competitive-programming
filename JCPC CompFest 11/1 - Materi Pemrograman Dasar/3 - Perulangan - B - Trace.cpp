//Trace
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int n,bil[501][501],trace=0;
	scanf("%d",&n);
	forn(i,1,n){
		forn(j,1,n){
			scanf("%d",&bil[i][j]);
		}
	}
	forn(i,1,n){
		forn(j,1,n){
			if(i==j){
				trace+=bil[i][j];
			}
		}
	}
	printf("%d\n",trace);
	return 0;
}

