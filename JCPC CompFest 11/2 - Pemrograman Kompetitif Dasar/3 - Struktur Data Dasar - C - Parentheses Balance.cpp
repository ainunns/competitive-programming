//Parentheses Balance
#include <bits/stdc++.h>
#include <vector>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int n;
	string s;
	scanf("%d",&n);
	forn(i,1,n){
		cin>>s;
		long long k=s.length();
		//40 = (, 41=), 91=[, 93=]
		long long x1=0,x2=0,w1=0,w2=0;
		forn(j,0,k-1){
			if(s[j]==40){
				x1++;
			}
			if(s[j]==41){
				x2++;
			}
			if(s[j]==91){
				w1++;
			}
			if(s[j]==93){
				w2++;
			}
		}
		if((w1==w2)&&(x1==x2)){
			printf("ya\n");
		} else {
			printf("tidak\n");
		}
	}
	return 0;
}

