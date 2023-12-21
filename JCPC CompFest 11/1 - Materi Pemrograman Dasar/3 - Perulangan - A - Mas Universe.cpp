//Mas Universe
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int main(){
	long long n,p[100001];
	vector<long long> v;
	scanf("%d",&n);
	forn(i,1,n){
		scanf("%lld",&p[i]);
		v.push_back(p[i]);
	}
	sort(v.begin(),v.end());
	printf("%lld\n",v[n-1]);
}
