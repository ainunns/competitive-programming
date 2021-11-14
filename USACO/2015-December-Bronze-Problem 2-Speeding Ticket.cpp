//http://www.usaco.org/index.php?page=viewproblem2&cpid=568
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define F first
#define S second
using namespace std;
void solve(){
	freopen("speeding.in","r",stdin);
	freopen("speeding.out","w",stdout);
	int n,a,b=1;
	pair<int,int> ar[200];
	cin>>n>>a;
	forn(i,1,n){
		int c,d;
		cin>>c>>d;
		forn(j,b,c+b-1) ar[j].F=d;
		b+=c;
	}
	b=1;
	forn(i,1,a){
		int c,d;
		cin>>c>>d;
		forn(j,b,c+b-1) ar[j].S=d;
		b+=c;
	}
	int ans=0;
	forn(i,1,100){
		if(ar[i].F<ar[i].S) ans=max(ans,ar[i].S-ar[i].F);
	}
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
}
