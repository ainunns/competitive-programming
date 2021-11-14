//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define fi first
#define se second
using namespace std;
typedef long long ll;
const int MX=3e5+5;
//Range Minimum Query
int a[MX],st[MX][26],lg[26];
void solve(){
	lg[1]=0;
	forn(i,2,26)
		lg[i]=lg[i/2]+1;
	int n;
	cin>>n;
	forn(i,1,n){
		cin>>a[i];
		st[i][0]=a[i];
	}
	forn(j,1,25){
		for(int i=1; i+(1<<j)<=n; i++)
			st[i][j]=min(st[i][j-1],st[(1<<(j-1))][j-1]);
	}
	int L,R;
	cin>>L>>R;
	int J=lg[R-L+1];
	int minimum=min(st[L][J],st[R-(1<<J)+1][J]);
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int tc=1;
	// cin>>tc;
	forn(i,1,tc){
		solve();
	}
}