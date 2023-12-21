//Pak Chanek sang Dokter Hewan
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
typedef unsigned long long int ull;
bool sudah[100001];
ull cost[100001],sum=0,n,q,a[100001],x,y,b,v,code;
int main(){
	cin>>n>>q;
	forn(z,1,n){
		cin>>a[z];
	}
	forn(z,1,q){
		cin>>code;
		if(code==1){
			cin>>x>>v;
			a[x]=v;
		} else if(code==2){
			cin>>x>>y;
			while(x<=y){
				b=x;
				forn(i,x,b){
					if(b==x){
						cost[i]=a[x];
					} else {
						cost[i]=cost[i-1]^a[x];
					}
					sum+=cost[i];
				}
				b++;
			}
		}
	}
	return 0;
}

