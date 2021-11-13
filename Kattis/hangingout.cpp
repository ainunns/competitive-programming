//Hanging Out
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	int fs,x,p[201],num=0,gblh=0;
	string i="enter",o="leave",inp[201];
	scanf("%d %d",&fs,&x);
	forn(j,1,x){
		cin>>inp[j]>>p[j];
		if(inp[j]==i){
			num+=p[j];
			if(num>fs){
				gblh++;
				num-=p[j];
			}
		} else {
			num-=p[j];
		}
	}
	printf("%d\n",gblh);
}
