//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
const ll MOD=1e9+7;
ll res[2][2],cnt[2][2],tmp[2][2];
void solve(){
	ll n;
	cin>>n;
	memset(cnt,0,sizeof(cnt));
	memset(res,0,sizeof(res));
	forn(i,0,1) res[i][i]=1;
	forn(i,0,1){
		forn(j,0,1){
			cnt[i][j]=1;
		}
	}
	cnt[0][0]=0;
	// n--;
	while(n){
		if(n%2){
			memset(tmp,0,sizeof(tmp));
			forn(i,0,1){
				forn(j,0,1){
					forn(k,0,1){
						(tmp[i][k]+=res[i][j]%MOD*cnt[j][k]%MOD)%MOD;
					}
				}
			}
			forn(i,0,1){
				forn(j,0,1) res[i][j]=tmp[i][j];
			}
		}
		n/=2;
		memset(tmp,0,sizeof(tmp));
		forn(i,0,1){
			forn(j,0,1){
				forn(k,0,1){
					(tmp[i][k]+=cnt[i][j]%MOD*cnt[j][k]%MOD)%MOD;
				}
			}
		}
		forn(i,0,1){
			forn(j,0,1) cnt[i][j]=tmp[i][j];
		}
	}
	cout<<res[1][0]+res[1][1]<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin>>t;
	forn(i,1,t){
		solve();
	}
}