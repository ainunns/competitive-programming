#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1<<18],b[1000001];
void build(ll child, ll l, ll r){
	if(l==r) a[child]=b[l];
	else {
		ll m=(l+r)/2;
		build(2*child,l,m);
		build(2*child+1,m+1,r);
		a[child]=min(a[2*child],a[2*child+1]);
	}
}
ll query(ll child,ll l,ll r,ll x, ll y){
	if(l>=x && r<=y) return a[child];
	ll m=(l+r)/2;
	ll ans=LLONG_MAX;
	if(x<=m) ans=min(ans,query(2*child,l,m,x,y));
	if(y>m) ans=min(ans,query(2*child+1,m+1,r,x,y));	
	return ans;
}
void update(ll child,ll l,ll r,ll x,ll v){
	if(l==r) a[child]=v;
	else {
		ll m=(l+r)/2;
		if(x<=m) update(2*child,l,m,x,v);
		if(x>m) update(2*child+1,m+1,r,x,v);
		a[child]=min(a[2*child],a[2*child+1]);
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	ll n,q;
	cin>>n>>q;
	for(int i=1; i<=n; i++) cin>>b[i];
	build(1,1,n);
	while(q--){
		char c;
		ll e,d;
		cin>>c>>d>>e;
		if(c=='q') cout<<query(1,1,n,d,e)<<endl;
		else if(c=='u') update(1,1,n,d,e);
	}
}