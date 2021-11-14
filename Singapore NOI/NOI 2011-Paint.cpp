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
//before solving problems, please read line 15-25
//jgn lupa dicomment line 17-28 nya
const int MX=3e5+5;
ll n;
pair<ll, ll>a[MX];
bool cmp(pair<ll, ll>a,pair<ll, ll>b){
	if(a.se>b.se) return true;
	else if(a.se==b.se) return a.fi>=b.fi;
	return false;
}
void solve(){
	cin>>n;
	forn(i,1,n) cin>>a[i].fi;
	forn(i,1,n) cin>>a[i].se;
	sort(a+1,a+1+n,cmp);
	ll cost=0;
	forn(i,1,n){
		cost+=a[i].fi+(i-1)*a[i].se;
	}
	cout<<cost<<"\n";
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