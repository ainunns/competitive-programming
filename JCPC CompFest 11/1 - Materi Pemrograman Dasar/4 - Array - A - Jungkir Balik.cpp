//Jungkir Balik
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int n,a[101];
	scanf("%d",&n);
	forn(i,1,n){
		scanf("%d",&a[i]);
	}
	ford(i,n,1){
		printf("%d\n",a[i]);
	}
	return 0;
}

