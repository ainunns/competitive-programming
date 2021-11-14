//http://www.usaco.org/index.php?page=viewproblem2&cpid=735
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long ll;
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("lostcow.in","r",stdin);
	freopen("lostcow.out","w",stdout);
	ll x,y,ans=0,by=1,dir=1;
	cin>>x>>y;
	while(true){
		if((dir==1 && x<=y && y<=x+by) || (dir==-1 && x-by<=y && y<=x)){
			ans+=abs(y-x);
			cout<<ans<<endl;
			break;
		} else {
			ans+=by*2;
			by*=2;
			dir*=-1;
		}
	}
}
