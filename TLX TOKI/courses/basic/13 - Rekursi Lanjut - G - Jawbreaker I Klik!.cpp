//Jawbreaker I: Klik!
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int m,n,isi[50][50],k,b;
void tts(int x,int y,int nilai){
	int k=nilai;
	if(x>=0 && x<=m-1 && y>=0 && y<=n-1){
		if(isi[x][y]==k){
			isi[x][y]=7;
			tts(x,y-1,k);
			tts(x+1,y,k);
			tts(x,y+1,k);
			tts(x-1,y,k);
		}
	}
}
int main(){
	scanf("%d %d",&m,&n);
	forn(i,0,m-1){
		forn(j,0,n-1){
			scanf("%d",&isi[i][j]);
		}
	}
	scanf("%d %d",&b,&k);
	tts(b,k,isi[b][k]);
	int count=0;
	forn(i,0,m-1){
		forn(j,0,n-1){
			if(isi[i][j]==7){
				count++;
			}
		}
	}
	printf("%d\n",count*(count-1));
}
