//Problem Name
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	lll t,n,s;
	cin>>t;
	while(t--){
		cin>>s>>n;
		lll k=(n*(n-1)),m=s-k;
		if(m%n==0){
			m/=n;
			if(m%2==0) cout<<"Tidak bisa Nee-Chan!\n";
			else cout<<m<<" "<<m+(2*(n-1))<<"\n";
		} else cout<<"Tidak bisa Nee-Chan!\n";
	}
	return 0;
}

