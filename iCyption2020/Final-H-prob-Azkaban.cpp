//Final-H-prob-Azkaban
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;
int n,x[200005],ans=0,mid,maxr[200005],maxl[200005],a=0;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	forn(i,1,n) cin>>x[i];
	forn(i,1,n){
		a=max(a,x[i]);
		maxl[i]=a;
	}
	a=0;
	ford(i,n,1){
		a=max(a,x[i]);
		maxr[i]=a;
	}
	forn(i,1,n){
		ans+=min(maxl[i],maxr[i])-x[i];
	}
	cout<<ans<<"\n";
	return 0;
}

