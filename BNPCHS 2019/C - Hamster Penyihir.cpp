//Hamster Penyihir
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long int t,n,y,k;
	cin>>t;
	forn(i,1,t){
		cin>>n;
		k=100; y=0;
		while(k>0){
			if(n%2==1){
				n--;
				y++;
//				printf("%lld\n",y);
			} else {
				n/=2;
			}
			k--;
		}
		cout<<"Case #"<<i<<": "<<(100-y)<<endl;
	}
	return 0;
}

