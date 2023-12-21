//Perkalian Chaneka
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	unsigned long long int a,b;
	cin>>a>>b;
	if(a%11==0){
		a/=11;
	} else if(b%11==0){
		b/=11;
	}
	cout<<(a*b)<<endl;
	return 0;
}

