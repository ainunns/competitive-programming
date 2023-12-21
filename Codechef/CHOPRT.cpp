//Chef And Operators
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	long long t,a[10001],b[10001];
	scanf("%lld",&t);
	forn(i,1,t){
		scanf("%lld %lld",&a[i],&b[i]);
		if(a[i]>b[i]){
			printf(">\n");
		} else if(a[i]==b[i]){
			printf("=\n");
		} else if(a[i]<b[i]){
			printf("<\n");
		}
	}
}
