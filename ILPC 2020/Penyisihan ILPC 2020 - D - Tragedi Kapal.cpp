//Tragedi Kapal
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;

int main()
{
	int tc,t,n;
	cin>>tc;
	forn(i,1,tc){
		cin>>n>>t;
		int time=0,saved=2;
		while(time<=44){
			saved+=4;
			time+=(2*t);
		}
		cout<<(n-saved)<<endl;
	}
	return 0;
}

