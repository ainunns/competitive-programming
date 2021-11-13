//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
typedef long long ll;
void solve(){
	ll l,r;
	cin>>l>>r;
	ll ans=0;
	forn(i,l,r){
		if(i%4==0) ans++;
	}
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}
