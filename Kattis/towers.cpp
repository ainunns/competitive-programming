//Towers
#include <bits/stdc++.h>
#include <iostream>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	int m,bil[100000];
	string s[101],sn[101],sbil[100000];
	scanf("%d",&m);
	forn(i,1,m){
		cin>>s[i];
		sn[i]=s[i];
	}
	forn(i,1,m){
		ford(j,(sn[i].length()-1),0){
			if(sn[i][j]==97){
				sbil[i]=sn[i].substr(j+1,sn[i].length()-1);
				cout<<sbil[i];
			}
		}
	}
}
