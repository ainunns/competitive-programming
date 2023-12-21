//Lucky Four
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
long long hit(int x){
	long long cnt=0;
	rep(x>0){
		if((x%10)==4){
			cnt++;
		}
		x/=10;
	}
	return cnt;
}
int main(){
	long long t,bil[100001],count;
	scanf("%lld",&t);
	forn(i,1,t){
		count=0;
		scanf("%lld",&bil[i]);
		printf("%lld\n",hit(bil[i]));
	}
}
