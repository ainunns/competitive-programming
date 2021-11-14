//https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int n,arr[101],all;
bool sum[101][100001];
void solve(){
	memset(sum,false,sizeof(sum));
	all=0;
	cin>>n;
	forn(i,1,n) cin>>arr[i], all+=arr[i];
	if(all%2==1) cout<<"NO\n";
	else{
		all/=2;
		forn(i,1,n) sum[i][0]=true;
		forn(i,1,all){
			forn(j,1,n) {
				if(i>=arr[j]) sum[j][i]=(sum[j-1][i]||sum[j-1][i-arr[j]]);
			}
		}
		if(sum[n][all]) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}
