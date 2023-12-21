//Func-ception
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long a,b,x,y;
	scanf("%lld %lld %lld %lld",&a,&b,&x,&y);
	while(x<=y){
		printf("%lld\n",x);
		x=(a*x)+b;
	}
	return 0;
}

