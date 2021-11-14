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
ll k,m,c;
deque<ll>d;
string s;
void solve(){
	cin>>m>>k>>s;
	forn(i,0,m-1) d.push_back(i);
	for(auto c:s){
		if(c=='A'){
			// cout<<"A ->"<<d.front()<<"\n";
			d.push_back(d.front());
			d.pop_front();
		} else if(c=='B'){
			int tmp=d.front();
			d.pop_front();
			d.push_back(d.front());
			d.pop_front();
			d.push_front(tmp);
		}
	}
	int c=0;
	while(c<k-1){
		d.pop_front();
		c++;
	}
	cout<<d.front()<<" ";
	d.pop_front();
	cout<<d.front()<<" ";
	d.pop_front();
	cout<<d.front()<<"\n";
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