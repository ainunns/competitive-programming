//Perkalian Matriks
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,m,p,a[105][105],b[105][105],ans[105][105]={0};
	cin>>n>>m>>p;
	forn(i,1,n){
		forn(j,1,m) cin>>a[i][j];
	}
	forn(i,1,m){
		forn(j,1,p) cin>>b[i][j];
	}
	forn(i,1,n){
		forn(j,1,p){
			forn(k,1,m){
				ans[i][j]+=(a[i][k]*b[k][j]);
			}
		}
	}
	forn(i,1,n){
		forn(j,1,p-1) cout<<ans[i][j]<<" ";
		cout<<ans[i][p]<<endl;
	}
	return 0;
}

