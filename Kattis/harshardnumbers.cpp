//Harshad Numbers
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
long long jdig(long long x){
	if(x==0){
		return 0;
	} else {
		return (x%10)+jdig(x/10);
	}
}
int main(){
	long long int n;
	scanf("%lld",&n);
	while(n%jdig(n)!=0){
		n++;
	}
	if(n%jdig(n)==0){
		printf("%lld\n",n);
	}
}
