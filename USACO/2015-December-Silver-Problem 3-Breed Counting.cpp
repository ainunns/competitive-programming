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
	int n,q,a[100001][4]={0};
	cin>>n>>q;
	forn(i,1,n){
		int b;
		cin>>b;
		forn(j,1,3){
			if(b==j) a[i][j]=a[i-1][j]+1;
			else a[i][j]=a[i-1][j];
		}
	}
	int l,r;
	while(q--){
		cin>>l>>r;
		forn(i,1,3){
			cout<<a[r][i]-a[l-1][i];
			if(i<3) cout<<" ";
		} 
		cout<<endl;
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("bcount.in","r",stdin);
	freopen("bcount.out","w",stdout);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}
