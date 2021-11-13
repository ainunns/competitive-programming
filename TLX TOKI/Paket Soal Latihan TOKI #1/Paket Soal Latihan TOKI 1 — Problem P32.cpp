//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define fi first
#define se second
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
//before solving problems, please read line 17-20
//jgn lupa dicomment line 17-20 nya
const int MX=3e5+5;
ll dp[35][5][5];//dp[N][kedua terakhir][paling terakhir]
void solve(){
	forn(i,1,3) {
		dp[1][0][i]=1;
		forn(j,1,3) dp[2][i][j]=1;
	}
	ll n;
	cin>>n;
	if(n==1){
		cout<<3<<endl;
		return;
	}
	forn(i,3,n){
		forn(a,1,3){
			forn(b,1,3){
				forn(c,1,3){
					if(a+b+c!=6 || (a==2&&b==2&&c==2)) 
						dp[i][b][c]+=dp[i-1][a][b];
				}
			}
		}
	}
	ll ans=0;
	forn(i,1,3){
		forn(j,1,3){
			// cout<<i<<" "<<j<<" "<<dp[n][i][j]<<"\n";
			ans+=dp[n][i][j];
		}
	}
	cout<<ans<<"\n";
	/*
		winners focus on winning,
		losers focus on winners
	*/
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}