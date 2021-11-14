//http://www.usaco.org/index.php?page=viewproblem2&cpid=855
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long ll;
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("mixmilk.in","r",stdin);
	freopen("mixmilk.out","w",stdout);
	int c[3],m[3];
	forn(i,0,2) cin>>c[i]>>m[i];
	int i=0;
	forn(j,1,100){
		int cnt=min(m[i],c[(i+1)%3]-m[(i+1)%3]);
		m[i]-=cnt;
		m[(i+1)%3]+=cnt;
		i=(i+1)%3;
	}
	forn(i,0,2) cout<<m[i]<<endl;
}
