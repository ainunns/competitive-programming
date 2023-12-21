//Problem Name
#include <bits/stdc++.h>
#define forn(i,a,b) for(int  i=a; i<=b; i++)
#define ford(i,a,b) for(long long i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;
void solve(){
	lll n,m;
	cin>>n>>m;
	if(n>=m && n<=(5*m)){
		cout<<max(0LL,n-(4*m))<<" "<<(n-m)/4<<endl;
	} else {
		cout<<"-1 -1\n";
	}
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
