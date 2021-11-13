//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
string s;
ll sd,td,ls,lt,n;
vector<pair<ll, ll>>v;
ll sm,Tm;
bool win(ll a,ll b,ll c,ll d){
	return ceil((double)a/d)>=ceil((double)c/b);
}
ll find(ll a,ll b){
	ll l=0,mid,r=100000;
	while(l<=r){
		mid=(l+r)/2;
		if(win(sd+mid*ls,td+mid*lt,a,b)) r=mid-1;
		else l=mid+1;
	}
	return l;
}
void solve(){
	cin>>s>>sd>>td>>ls>>lt>>n;
	cin>>sm>>Tm;
	ll mi=find(sm,Tm);
	forn(i,2,n){
		ll a,b;
		cin>>a>>b;
		v.push_back({find(a,b),i});
	}
	sort(v.begin(), v.end());
	vector<ll>ans;
	if(mi>n-1){
		cout<<"-1\n";
		return;
	}
	forn(i,0,n-2){
		if(v[i].first>i){
			cout<<"-1\n";
			return;
		}
		if(!win(sd,td,sm,Tm)){
			sd+=ls;
			td+=lt;
			ans.push_back(v[i].second);
		}
	}
	cout<<ans.size()<<"\n";
	for(auto c:ans) cout<<c<<"\n";
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}