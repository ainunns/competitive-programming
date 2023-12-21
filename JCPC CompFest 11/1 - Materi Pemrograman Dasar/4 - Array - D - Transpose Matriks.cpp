//Transpose Matriks
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int m,n,a[101][101];
	scanf("%d %d",&n,&m);
	forn(i,1,n){
		forn(j,1,m){
			scanf("%d",&a[i][j]);
		}
	}
	forn(j,1,m){
		forn(i,1,n){
			if(i!=n){
				printf("%d ",a[i][j]);
			} else {
				printf("%d\n",a[i][j]);
			}
		}
	}
	return 0;
}

