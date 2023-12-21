//Menggabungkan Monster
#include <bits/stdc++.h>
#include <vector>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long n,m,a[100001],sum[100001];
	vector<long long> v;
	scanf("%lld %lld",&n,&m);
	forn(i,1,n){
		scanf("%lld",&a[i]);
	}
	forn(i,1,n-m+1){
		forn(j,i,i+m){
			sum[i]+=a[j];
		}
		v.push_back(sum[i]);
	}
	sort(v.begin(),v.end());
	printf("%lld\n",v[n-m]);
	return 0;
}

