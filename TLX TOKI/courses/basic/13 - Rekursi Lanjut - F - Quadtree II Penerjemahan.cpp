//Quadtree II: Penerjemahan
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
using namespace std;
int grid[128][128];
string bil[128*128];
int max(int r,int c){
	if(r>=c){
		return r;
	} else {
		return c;
	}
}
void isi(int r,int c,string s){
	int l=1,h=1,x=s.length();
	forn(i,1,x-1){
		if(s[i]==48){
			r/=2;
			c/=2;
		} else if(s[i]==49){
			l+=(r/2);
			r/=2;
			c/=2;
		} else if(s[i]==50){
			r/=2;
			h+=(c/2);
			c/=2;
		} else if(s[i]==51){
			l+=(r/2);
			h+=(c/2);
			r/=2;
			c/=2;
		}
	}
	forn(i,h,h+c-1){
		forn(j,l,l+r-1){
			grid[i][j]=1;
		}
	}
}
int main(){
	int n,r,c,pow2=1,maxrc;
	scanf("%d",&n);
	forn(i,1,n){
		cin>>bil[i];
	}
	scanf("%d %d",&r,&c);
	maxrc=max(r,c);
	while(pow2<maxrc){
		pow2*=2;
	}
	forn(i,1,pow2){
		forn(j,1,pow2){
			grid[i][j]=0;
		}
	}
	forn(i,1,n){
		isi(pow2,pow2,bil[i]);
	}
	forn(i,1,r){
		forn(j,1,c-1){
			printf("%d ",grid[i][j]);
		}
		printf("%d\n",grid[i][c]);
	}
	return 0;
}
