#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
const ll MOD=1e9+7,N=2e5+5;
void solve(){
    int n;
    string s,p="PPAP";
    cin>>n>>s;
    int dp[n+1][5]={0};
    forn(i,0,n) dp[i][0]=1;
    forn(i,1,n){
        forn(j,1,4){
            if(s[i-1]==p[j-1]) dp[i][j]=(dp[i-1][j-1]%MOD+dp[i-1][j]%MOD)%MOD;
            else dp[i][j]=dp[i-1][j]%MOD;
        }
    } 
    cout<<dp[n][4]%MOD<<endl;
}
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
