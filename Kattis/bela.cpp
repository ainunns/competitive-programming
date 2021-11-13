//Bela
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	int n,score=0;
	char sp=' ',d;
	string s[401];
	cin>>n>>d;
	forn(i,1,(4*n)){
		cin>>s[i];
		if(s[i][0]==65){
			score+=11;
		} else if(s[i][0]==75){
			score+=4;
		} else if(s[i][0]==81){
			score+=3;
		} else if(s[i][0]==74){
			if(s[i][1]==d){
				score+=20;
			} else{
				score+=2;
			}
		} else if(s[i][0]==84){
			score+=10;
		} else if(s[i][0]==57){
			if(s[i][1]==d){
				score+=14;
			} else {
				score+=0;
			}
		} else {
			score+=0;
		}
	}
	printf("%d\n",score);
}
