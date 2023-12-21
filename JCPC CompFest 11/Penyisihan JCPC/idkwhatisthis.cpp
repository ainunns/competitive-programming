//Problem Name
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define F first
#define S second
typedef long long int lll;
typedef long long ll;
using namespace std;
bool cmp(pair<lll,lll> a,pair<lll,lll> b){
	if(a.F==b.F) return (abs(a.F-a.S)<abs(b.F-b.S));
	else return a.F>b.F;
}
void solve(){
	lll n,q,x,y;
	pair<lll,lll> a[100005],b[100005];
	cin>>n>>q;
	forn(i,1,n) cin>>a[i].F, b[i].S=a[i].F;
	forn(i,1,n) cin>>b[i].F, a[i].S=b[i].F;
	sort(a+1,a+1+n,cmp);
	sort(b+1,b+1+n,cmp);
	forn(i,1,q){
		lll ans=0,add,low=1,high=n;
		cin>>x>>y;
		while(low<=high){
			lll mid=(high+low)/2;
			if(a[mid].F<x && (mid==1 || a[mid+1].F<a[mid].F)){
				add=mid;
				break;
			} else if()
		}
		cout<<ans<<endl;
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
