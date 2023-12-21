//Detektor Palindrom
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int n;
	string s[11],k[11];
	scanf("%d",&n);
	forn(i,1,n){
		cin>>s[i];
	}
	forn(i,1,n){
		ford(j,s[i].length()-1,0){
			k[i]+=s[i][j];
		}
//		cout<<k[i]<<endl;
		if(s[i]==k[i]){
			printf("palindrom\n");
		} else {
			printf("bukan palindrom\n");
		}
	}
	return 0;
}

