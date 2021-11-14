//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
void solve(){
	int n;
	string a,b;
	cin>>n>>a>>b;
	int st=-1,f,ans=0;
	forn(i,0,n-1){
		if(a[i]!=b[i]){
			if(st==-1) st=i;
			f=i;
			// cout<<st<<" "<<f<<endl;
		} else {
			if(st>-1) {
				ans++;
				// cout<<st<<endl;
			}
			st=-1;
			f=st;
		}
	}
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("breedflip.in","r",stdin);
	freopen("breedflip.out","w",stdout);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}
