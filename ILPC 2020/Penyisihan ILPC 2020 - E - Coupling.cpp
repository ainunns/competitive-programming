//Coupling
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;

int main()
{
	long long int t,n,couple[10001];
	forn(i,1,10000){
		couple[i]=1;
	}
	forn(i,1,10000){
		for(long long int j=1; j<=i; j+=2){
			couple[i]=(couple[i]*j)%1000000007;
		}
	}
	cin>>t;
	forn(i,1,t){
		cin>>n;
		cout<<couple[n]<<endl;
	}
	return 0;
}

