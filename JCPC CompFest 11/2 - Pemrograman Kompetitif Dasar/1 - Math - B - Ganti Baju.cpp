//Ganti Baju
#include <bits/stdc++.h>
#include <iomanip>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	double p;
	scanf("%lf",&p);
	if(p==1 || p==0){
		printf("0.000000000\n");
	} else {
		double pc=(100-p);
		double h3;
		h3=pc*pc*p;
		long double prob=((100*p*p)/((10000*p)-h3));
		cout<<fixed;
		cout<<setprecision(9)<<prob<<endl;
	}
	return 0;
}

