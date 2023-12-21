//Problem Name
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;
void solve(){
	lll n,ans=0;
	cin>>n;
	for(int i=1; i*i<=n; i++){
		for(int j=i+1; j*i<=n; j++){
			if(n!=(i*j) && n-(i*j)!=i && n-(i*j)!=j) ans++;				
		}
	}
	cout<<ans*2<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
