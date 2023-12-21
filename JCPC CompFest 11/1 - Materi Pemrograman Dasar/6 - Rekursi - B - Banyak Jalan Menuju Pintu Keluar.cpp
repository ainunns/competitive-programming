//Banyak Jalan Menuju Pintu Keluar
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int n,m,cara[11][11];
	scanf("%d %d",&n,&m);
	forn(i,1,n){
		cara[i][1]=1;
	}
	forn(i,2,m){
		cara[1][i]=1;
	}
	forn(i,2,n){
		forn(j,2,m){
			cara[i][j]=0;
		}
	}
	forn(i,2,n){
		forn(j,2,m){
			cara[i][j]=cara[i-1][j]+cara[i][j-1];
		}
	}
	printf("%d\n",cara[n][m]);
	return 0;
}
