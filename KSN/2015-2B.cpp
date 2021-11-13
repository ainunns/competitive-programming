#include <iostream>
#include <algorithm>
#include <vector>
#define fi first
#define se second
#define ll long long
using namespace std;
int main(){
	char dum[10];
	scanf("%s",dum);
	int n,m;
	scanf("%d %d",&n,&m);
	pair<ll, ll>a[n];
	vector<ll>v[m+1];
	for(int i=0; i<n; i++){
		scanf("%lld %lld",&a[i].se,&a[i].fi);
		v[a[i].se].push_back(a[i].fi);
	}
	sort(a,a+n,greater<pair<ll, ll>>());
	for(int i=1; i<=m; i++)
		sort(v[i].begin(), v[i].end(),greater<ll>());
	ll all=0,cur=n;
	for(int i=0; i<n; i++){
		all+=cur*a[i].fi;
		cur-=2;
	}
	for(int i=1; i<=m; i++){
		cur=(ll)v[i].size();
		for(auto c:v[i]){
			all-=cur*c;
			cur-=2;
		}
	}
	printf("%lld\n", all);
}