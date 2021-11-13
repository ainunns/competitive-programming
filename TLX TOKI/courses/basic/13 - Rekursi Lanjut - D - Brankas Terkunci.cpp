//Brankas Terkunci
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
int n,k,catat[10];
void tulis(int kedalaman) {
	catat[0]=0;
	if (kedalaman >= k+1) {
		// Cetak password
		forn(i,1,k-1){
			printf("%d ",catat[i]);
		}
		printf("%d\n",catat[k]);
	} else {
		// Masuk ke lapisan lebih dalam
		for (int i = catat[kedalaman-1]+1; i <= n; i++) {
			catat[kedalaman] = i; // Catat di sini
			tulis(kedalaman+1);
		}
	}
}
int main(){
	scanf("%d %d",&n,&k);
	tulis(1);
}
