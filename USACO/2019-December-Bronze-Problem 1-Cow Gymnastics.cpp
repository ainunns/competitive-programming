//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
using namespace std;
typedef long long ll;
//before solving problems, please read line 15-25
//jgn lupa dicomment line 16-26 nya
const int MX=2e5+5;
	map<pair<int, int>, int>ma;
void solve(){
	freopen("gymnastics.in","r",stdin);
	freopen("gymnastics.out","w",stdout);
	int k,n;
	cin>>k>>n;
	int a[20][25];
	forn(i,1,k){
		forn(j,1,n){
			cin>>a[i][j];
		}
		if(i==1){
			forn(j,1,n)
				forn(k,j+1,n) {
					ma[{a[i][j],a[i][k]}]=1;
					// cout<<a[i][j]<<" "<<a[i][k]<<"\n";
				}
		} else {
			// cout<<__LINE__<<"\n";
			forn(j,1,n)
				forn(k,j+1,n)
					if(ma[{a[i][k],a[i][j]}]==1) {
						// cout<<a[i][j]<<" "<<a[i][k]<<"\n";
						ma[{a[i][k],a[i][j]}]=0;
					}
		}
	}
	int ans=0;
	forn(i,1,n){
		forn(j,1,n)
			if(ma[{i,j}]==1){
				// cout<<i<<" "<<j<<"\n";
				ans+=(ma[{i,j}]);
			}
	}
	cout<<ans<<"\n";
	/*
		pikirin baik baik soalnya, dibuat santai aja
		kalo ngestuck, coba cari approach lain
		ngestucknya sampe bikin depresi? ingat! Allah itu dekat
		mintalah pertolongan kepada-Nya
		kamu cuma manusia biasa
		kamu lemah, ga usah sok jago
		yg buat km bs AC-in soal itu ya karena bantuan Allah
		Allah itu powerful, apapun bisa Dia lakukan
		minta pertolongan kepada-Nya ya
		semangat terus :)
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