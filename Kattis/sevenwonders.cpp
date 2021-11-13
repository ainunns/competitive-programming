//Seven Wonders
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	forn(i,1,122){
		printf("ascii ke-%d : %c\n",i,i);
	}
//	string s;
//	int t=0,c=0,g=0,point,plss=0;
//	cin>>s;
//	forn(i,0,(s.length()-1)){
//		switch (s[i]){
//			case 67 : c++; break;
//			case 71 : g++; break;
//			case 84 : t++; break;
//		}
//	}
//	point=((c*c)+(g*g)+(t*t));
//	while((c>0)&&(g>0)&&(t>0)){
//		c--;
//		g--;
//		t--;
//		plss++;
//	}
//	point+=(7*plss);
//	printf("%d\n",point);
}
/*
T = 84
G = 71
C = 67*/
