//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
void solve(){
	int r,c;
	cin>>r>>c;
	string ro[r];
	forn(i,0,r-1) cin>>ro[i];
	ll dp[r+1][c+1];
	memset(dp,0,sizeof(dp));
	dp[1][1]=ro[0][0]-'0';
	forn(i,1,r-1) dp[i+1][1]=dp[i][1]+ro[i][0]-'0';
	forn(i,1,c-1) dp[1][i+1]=dp[1][i]+ro[0][i]-'0';
	forn(i,1,r-1){
		forn(j,1,c-1){
			dp[i+1][j+1]=dp[i][j+1]+dp[i+1][j]+ro[i][j]-'0'-dp[i][j];
		}
	}
	// forn(i,0,r){
	// 	forn(j,0,c) cout<<dp[i][j]<<" ";
	// 	cout<<endl;
	// }
	// cout<<dp[r][c]<<endl;
	ll pup=dp[r][c],ans=LLONG_MAX;
	for(ll i=1; i*i<=pup; i++){
		if(pup%i!=0) continue;
		ll ti=pup/i;
		// cout<<i<<" "<<ti<<endl;
		if(i<=r && ti<=c){
			forn(a,i,r){
				forn(b,ti,c){
					ll cur=dp[a][b]-dp[a-i][b]-dp[a][b-ti]+dp[a-i][b-ti];
					// ans=min(ans,pup-cur);
					if(ans>pup-cur){
						ans=pup-cur;
						// cout<<"Min "<<ans<<endl;
						// cout<<"Koordinat : ========\n";
						// cout<<a<<" "<<b<<endl;
						// cout<<a-i<<" "<<b<<endl;
						// cout<<a<<" "<<b-ti<<endl;
						// cout<<a-i<<" "<<b-ti<<endl;
					}
				}
			}
		}
		if(i<=c && ti<=r){
			forn(a,ti,r){
				forn(b,i,c){
					ll cur=dp[a][b]-dp[a-ti][b]-dp[a][b-i]+dp[a-ti][b-i];
					// ans=min(ans,pup-cur);
					if(ans>pup-cur){
						ans=pup-cur;
						// cout<<"Min "<<ans<<endl;
						// cout<<"Koordinat : ========\n";
						// cout<<a<<" "<<b<<endl;
						// cout<<a-i<<" "<<b<<endl;
						// cout<<a<<" "<<b-ti<<endl;
						// cout<<a-i<<" "<<b-ti<<endl;
					}
				}
			}
		}
	}
	if(ans==LLONG_MAX) ans=-1;
	cout<<ans<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}