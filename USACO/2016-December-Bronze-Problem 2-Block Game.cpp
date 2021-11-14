//http://www.usaco.org/index.php?page=viewproblem2&cpid=664
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long ll;
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("blocks.in","r",stdin);
	freopen("blocks.out","w",stdout);
	int n;
	cin>>n;
	int ans[26]={0};
	forn(i,1,n){
		string a,b;
		cin>>a>>b;
		int arr[26]={0},ar[26]={0};
		for(auto c:a) arr[c-'a']++;
		for(auto c:b) ar[c-'a']++;
		forn(i,0,25) ans[i]+=max(arr[i],ar[i]);
	}
	forn(i,0,25) cout<<ans[i]<<endl;
}
