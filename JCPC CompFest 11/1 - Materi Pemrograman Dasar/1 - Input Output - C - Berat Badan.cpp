//Berat Badan
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	double a,b,c,d,e,f,sum=0;
	cin>>a>>b>>c>>d>>e>>f;
	sum=a+b+c+d+e+f;
	printf("%.9lf\n",(sum/6));
	return 0;
}

