//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(ll i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
int a[2001][2001]={0};
void solve(){
	forn(i,0,2){
		int b,c,d,e;
		cin>>b>>c>>d>>e;
		b+=1000; c+=1000; d+=1000; e+=1000;
		forn(x,b,d-1){
			forn(y,c,e-1){
				a[x][y]=(i<2);
			}
		}
	}
	// cout<<a[1001][1002]<<"\n";
	int ans=0;
	forn(i,0,2000){
		forn(j,0,2000){
			ans+=a[i][j];
		}
	}
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	freopen("billboard.in","r",stdin);
	freopen("billboard.out","w",stdout);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}
