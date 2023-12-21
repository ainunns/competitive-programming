//Kalkulator KW
#include <bits/stdc++.h>
#define forn(i,a,b) for(long long i=a; i<=b; i++)
#define ford(i,a,b) for(long long i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
typedef unsigned long long int ull;
ull sum(ull x,ull y){
	ull hasil=0,count=0,k=1;
	while(x>0 || y>0){
		if(((x%10)+(y%10))<10){
			hasil=k*((x%10)+(y%10))+(hasil);
		} else {
			hasil=k*((x+y)%10)+(hasil);
		}
		x/=10; y/=10; k*=10;
	}
	return hasil;
}
int main(){
	ull t,n,m;
	cin>>t;
	forn(i,1,t){
		cin>>n>>m;
		cout<<"Case #"<<i<<": "<<sum(n,m)<<endl;
	}
	return 0;
}
