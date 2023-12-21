//Prima
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
long long x=2,n,k,p[100001];
bool bener;
int main(){
	scanf("%lld %lld",&n,&k);
	p[1]=2;
	for(long long i=3; i<=610001; i+=2){
		bener=true;
		for(long long j=2; j*j<=i; j++){
			if(i%j==0){
				bener=false;
				break;
			}
		}
		if(bener){
			p[x]=i;
			x++;
		}
	}
	for(long long i=609999; i<=1000000; i+=2){
		bener=true;
		for(long long j=2; j*j<=i; j++){
			if(i%j==0){
				bener=false;
				break;
			}
		}
		if(bener){
			p[x]=i;
			x++;
		}
	}
	forn(i,1,n){
		printf("%lld\n",p[((i-1)*k)+1]);
	}
	return 0;
}

