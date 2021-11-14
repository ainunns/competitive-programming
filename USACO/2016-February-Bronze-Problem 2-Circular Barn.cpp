//http://www.usaco.org/index.php?page=viewproblem2&cpid=616
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long ll;
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("cbarn.in","r",stdin);
	freopen("cbarn.out","w",stdout);
	int n,r[2000],ans=INT_MAX;
	cin>>n;
	forn(i,1,n) cin>>r[i];
	forn(i,1,n){
		int cnt=0;
		forn(j,1,n){
			if(i==j) continue;
			int step=j-i;
			if(step<0) step+=n;
			cnt+=step*r[j];
		}
		ans=min(ans,cnt);
	}
	cout<<ans<<endl;
}
