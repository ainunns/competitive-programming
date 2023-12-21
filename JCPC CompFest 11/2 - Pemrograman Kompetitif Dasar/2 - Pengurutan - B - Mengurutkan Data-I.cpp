//Mengurutkan Data-I
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long n,data[1001];
	vector<long long> v;
	scanf("%lld",&n);
	forn(i,1,n){
		scanf("%lld",&data[i]);
		v.push_back(data[i]);
	}
	sort(v.begin(),v.end());
	forn(i,0,n-1){
		if(i==n-1){
			printf("%lld\n",v[i]);
		} else {
			printf("%lld ",v[i]);
		}
	}
	return 0;
}

