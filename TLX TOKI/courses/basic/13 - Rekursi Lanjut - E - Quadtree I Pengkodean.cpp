//Quadtree I: Pengkodean
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
using namespace std;
int m[130][130],njawaban;
string jawaban[128*128];
bool homogen(int r,int c, int k){
	int val=m[r][c];
	forn(i,r,r+k-1){
		forn(j,c,c+k-1){
			if(m[i][j]!=val){
				return false;
			}
		}
	}
	return true;
}
void quadtree(int r,int c, int k, string s){
	if(homogen(r,c,k)){
		if(m[r][c]==1){
			jawaban[njawaban]="1"+s;
			njawaban++;
		}
	} else {
		quadtree(r,c,k/2,s+"0");
		quadtree(r,c+(k/2),k/2,s+"1");
		quadtree(r+(k/2),c,k/2,s+"2");
		quadtree(r+(k/2),c+(k/2),k/2,s+"3");
	}
}
int max(int r,int c){
	if(r>=c){
		return r;
	} else {
		return c;
	}
}
int main(){
	int r,c,pow2=1,maxrc;
	scanf("%d %d",&r,&c);
	maxrc=max(r,c);
	while(pow2<maxrc){
		pow2*=2;
	}
	forn(i,0,pow2-1){
		forn(j,0,pow2-1){
			m[i][j]=0;
		}
	}
	forn(i,0,r-1){
		forn(j,0,c-1){
			scanf("%d",&m[i][j]);
		}
	}
	njawaban=0;
	quadtree(0,0,pow2,"");
	printf("%d\n",njawaban);
	forn(i,0,njawaban-1){
		cout<<jawaban[i]<<"\n";
	}
}
