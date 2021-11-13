//Speed Limit
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	long long n,s[11],t[11],dist;
	while((cin>>n)&&(n!=-1)){
		dist=0;
		forn(i,1,n){
			scanf("%lld %lld",&s[i],&t[i]);
		}
		dist+=s[1]*t[1];
		forn(i,2,n){
			dist+=(s[i]*(t[i]-t[i-1]));
		}
		printf("%lld miles\n",dist);
	}
}
