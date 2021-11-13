//detaileddifferences
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	int n;
	string a[501],b[501];
	scanf("%d",&n);
	forn(i,1,n){
		cin>>a[i];
		cin>>b[i];
	}
	forn(i,1,n){
		cout<<a[i]<<"\n";
		cout<<b[i]<<"\n";
		forn(j,0,a[i].length()-1){
			if(a[i][j]==b[i][j]){
				printf(".");
			} else {
				printf("*");
			}
		}
		printf("\n");
	}
}
