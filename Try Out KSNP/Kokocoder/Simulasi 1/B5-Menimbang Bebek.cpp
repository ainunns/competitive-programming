#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
const ll MX=1e5+5;
ll n,k,a[MX],dp[MX],ans[MX];
int main(){
	cin>>n>>k;
	forn(i,1,n){
		cin>>a[i];
		dp[i]=dp[i-1]+a[i];
	}
	forn(i,1,n){
		forn(j,1,n-i+1){
			if(dp[j+i-1]-dp[j-1]==k*i)
				ans[j+i-1]++;
		}
	}
	ll now=0;
	forn(i,1,n-1) {
		now+=ans[i];
		cout<<now<<" ";
	}
	cout<<ans[n]+now<<"\n";
}