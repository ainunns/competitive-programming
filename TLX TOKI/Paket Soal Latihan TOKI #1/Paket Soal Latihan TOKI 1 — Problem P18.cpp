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
//jgn lupa dicomment line 15-26 nya
const int MX=2e5+5;
map<string, vector<string>>ma;
int n;
string a[10001];
void solve(){
	cin>>n;
	forn(i,1,n){
		cin>>a[i];
		string b=a[i];
		sort(b.begin(), b.end());
		ma[b].push_back(a[i]);
	}
	sort(a+1,a+1+n);
	int mx=1,idx=-1;
	forn(i,1,n){
		sort(a[i].begin(), a[i].end());
		if(mx<(int)ma[a[i]].size()){
			mx=(int)ma[a[i]].size();
			idx=i;
		}
	}
	if(idx==-1){
		cout<<"TIDAK ADA\n";
		return;
	}
	cout<<(int)ma[a[idx]].size()<<"\n";
	sort(ma[a[idx]].begin(), ma[a[idx]].end());
	for(auto c:ma[a[idx]]){
		cout<<c<<"\n";
	}
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
