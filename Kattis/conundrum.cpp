//Conundrum
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	string s;
	long long count=0;
	cin>>s;
	forn(i,0,s.length()-1){
		if((i%3==0)&&(s[i]!=80)){
			count++;
		} else if((i%3==1)&&(s[i]!=69)){
			count++;
		} else if((i%3==2)&&(s[i]!=82)){
			count++;
		}
	}
	printf("%lld\n",count);
}
