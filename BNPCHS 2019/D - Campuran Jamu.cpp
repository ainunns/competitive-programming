//Campuran Jamu
#include <bits/stdc++.h>
#include <cmath>
#define forn(i,a,b) for(long long i=a; i<=b; i++)
#define ford(i,a,b) for(long long i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
typedef unsigned long long int ull;
ull exp(ull x,ull y){
	ull hasil=1;
	forn(i,1,y){
		hasil=hasil*(x%1000003);
	}
	return (hasil%1000003);
}
int main(){
	ull t,n,hasil;
	cin>>t;
	forn(i,1,t){
		cin>>n;
		if(n>1000003){
			n%=1000003;
		}
		hasil=(exp(n+1,n)-1)%1000003;
		cout<<"Case #"<<i<<": "<<hasil<<endl;
	}
	return 0;
}

