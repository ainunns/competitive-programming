#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define F first
#define S second
using namespace std;
typedef long long ll;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("diamond.in","r",stdin);
	freopen("diamond.out","w",stdout);
	int n,k;
	cin>>n>>k;
	vector<int>v(n);
	forn(i,0,n-1) cin>>v[i];
	sort(v.begin(), v.end());
	int ans=-1;
	forn(i,0,n-1){
		int cnt=1;
		forn(j,i+1,n-1){
			if(abs(v[j]-v[i])<=k) cnt++;
		}
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
}
