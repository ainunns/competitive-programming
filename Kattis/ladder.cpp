//Ladder
#include <bits/stdc++.h>
#include <cmath>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define PI 3.14159
#define max 1e9+7
using namespace std;
int main(){
	long long h,v;
	scanf("%lld %lld",&h,&v);
	cout<<ceil(h/(sin((v)*PI/180)))<<"\n";
}
