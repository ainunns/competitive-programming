#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define F first
#define S second
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("cowqueue.in","r",stdin);
	freopen("cowqueue.out","w",stdout);
	int a;
	cin>>a;
	vector<pair<int,int>>v(a);
	forn(i,0,a-1) cin>>v[i].F>>v[i].S;
	sort(v.begin(), v.end());
	int ans=0;
	for(auto c:v){
		ans=max(ans,c.F);
		ans+=c.S;
	}
	cout<<ans<<endl;
}
