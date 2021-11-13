//Planina
#include <bits/stdc++.h>
#include <cmath>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int point(int x){
	if(x==0){
		return 2;
	} else {
		return 2*point(x-1)-1;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",point(n)*point(n));
}
