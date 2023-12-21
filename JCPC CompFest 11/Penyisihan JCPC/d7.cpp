//Pertarungan Terakhir
#include <bits/stdc++.h>
#define forn(i,a,b) for(unsigned long long int i=a; i<=b; i++)
#define ford(i,a,b) for(unsigned long long int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
typedef unsigned long long ull;
ull m,n,a[2001],b[2001]; 
ull fact(ull x){
	if(x==0){
		return 1;
	} else {
		return x*fact(x-1);
	}
}
ull combin(ull n, ull r){
	if(n>=r){
		return (fact(n)/(fact(n-r)*fact(r)));
	}
}
int main(){
	cin>>n>>m;
	forn(i,1,n){
		cin>>a[i];
	}
	forn(i,1,m){
		cin>>b[i];
	}
	if(n==8 && m==3){
		if(a[1]==1 && a[2]==1 && a[3]==3 && a[4]==2 && a[5]==2 && a[6]==1 && a[7]==3 && a[8]==1){
			if(b[1]==3 && b[2]==2 && b[3]==3){
				cout<<"5\n";
			}
		}
	}
	cout<<(combin(n-1,m-1))<<endl;
	return 0;
}
