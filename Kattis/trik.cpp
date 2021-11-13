//Trik
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	string s;
	int balls;
	cin>>s;
	forn(i,0,s.length()-1){
		switch(s[i]){
			case 65 : balls=2; break;
			case 66 : balls=3; break;
			case 67 : balls=1; break;
		}
	}
	printf("%d\n",balls);
	return 0;
}

