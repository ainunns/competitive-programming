#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
const ll N=2e5+5,MOD=1e9+7;
ll mulmod(ll a,ll b, ll c){
	ll x=0,y=a%c;
	while(b){
		if(b%2) x=(x+y)%c;
		y=(y*2LL)%c;
		b/=2;
	}
	return x%c;
}
ll exp(ll a, ll p, ll mod){
	ll res=1;
	while(p){
		if(p%2) res=mulmod(res,a,mod);
		p/=2;
		a=mulmod(a,a,mod);
	}
	return res%mod;
}
bool isprime(ll n){
	if(n<4) return n==2 || n==3;
	forn(i,1,5){
		ll p=2+rand()%(n-3);
		if(exp(p,n-1,n)!=1) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<(isprime(n)?"1\n":"0\n");
	}
}