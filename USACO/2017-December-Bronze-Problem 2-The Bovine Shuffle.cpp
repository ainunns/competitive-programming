//http://www.usaco.org/index.php?page=viewproblem2&cpid=760
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("shuffle.in","r",stdin);
	freopen("shuffle.out","w",stdout);
	int n;
	array<int,200> a,b,c;
	cin>>n;
	forn(i,1,n) cin>>a[i];
	forn(i,1,n) cin>>b[i];
	forn(j,1,3){
		forn(i,1,n) c[i]=b[a[i]];
		forn(i,1,n) b[i]=c[i];
	}
	forn(i,1,n) cout<<c[i]<<endl;
	return 0;
}
