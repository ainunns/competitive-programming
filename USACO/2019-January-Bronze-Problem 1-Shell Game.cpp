//http://www.usaco.org/index.php?page=viewproblem2&cpid=891
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long ll;
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("shell.in","r",stdin);
	freopen("shell.out","w",stdout);
	int n,arr[4],a[200],b[200],c[200];
	cin>>n;
	forn(i,1,n) cin>>a[i]>>b[i]>>c[i];
	int ans=0;
	forn(i,1,3){
		memset(arr,0,sizeof(arr));
		arr[i]=1;
		int cnt=0;
		forn(j,1,n){
			swap(arr[a[j]],arr[b[j]]);
			if(arr[c[j]]==1) cnt++;
		}
		ans=max(ans,cnt);
	}
	cout<<ans<<endl;
	return 0;
}
