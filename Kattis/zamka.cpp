//Zamka
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int jmlhdigit(long long x){
	long long temp=x;
	if(temp==0){
		return temp;
	} else {
		return (temp%10)+jmlhdigit(temp/10);
	}
}
int main(){
	long long l,d,x;
	scanf("%lld %lld %lld",&l,&d,&x);
	while(jmlhdigit(l)!=x){
		l++;
	}
	printf("%lld\n",l);
	while(jmlhdigit(d)!=x){
		d--;
	}
	printf("%lld\n",d);
}
