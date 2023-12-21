//Badak Chanek
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long n,q,p[100001],x[100001],ketemu;
	vector<long long> v;
	scanf("%lld %lld",&n,&q);
	forn(i,1,n){
		scanf("%lld",&p[i]);
		v.push_back(p[i]);
	}
	sort(v.begin(),v.end());
//	forn(i,0,n-1){
//		printf("%lld\n",v[i]);
//	}
	forn(i,1,q){
		scanf("%lld",&x[i]);
		printf("%lld\n",v[x[i]-1]);
	}
	return 0;
}

