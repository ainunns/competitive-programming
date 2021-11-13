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
//before solving problems, please read line 17-28
//jgn lupa dicomment line 17-28 nya
const int MX=3e5+5;
int sieve[1001]={0};
vector<pair<int, int>>fact[1001];
map<int, int>ma,mb;
vector<int>prime;
int pre1[1001]={0},pre2[1001]={0},tmp[1001][1001]={0};
void solve(){
	int n,a;
	cin>>n;
	forn(i,1,n){
		cin>>a;
		ma[a]++;
	}
	int m,b;
	cin>>m;
	forn(i,1,m){
		cin>>b;
		mb[b]++;
	}
	sieve[1]=1;
	for(int i=2; i<=1000; i++)
		if(!sieve[i])
			for(int j=i*i; j<=1000; j+=i)
				sieve[j]=1;
	forn(i,1,1000)
		if(!sieve[i])
			prime.push_back(i);
	fact[1].push_back({1,1});
	forn(i,2,1000){
		int tmp=i;
		for(int c:prime)
			if(c*c<=i){
				if(tmp%c==0){
					int cnt=0;
					while(tmp%c==0){
						cnt++;
						tmp/=c;
					}
					fact[i].push_back({c,cnt});
				}
			}
			else
				break;
		if(tmp>1)
			fact[i].push_back({tmp,1});
	}
	forn(i,2,1000){
		for(auto [c,d]:fact[i])
			tmp[i][c]+=d;
		forn(j,2,1000){
			tmp[i][j]+=tmp[i-1][j];
			pre1[j]+=ma[i]*tmp[i][j];
			pre2[j]+=mb[i]*tmp[i][j];
		}
	}
	forn(i,2,1000){
		int mi=min(pre1[i],pre2[i]);
		pre1[i]-=mi;
		pre2[i]-=mi;
	}
	forn(i,2,1000)
		if(pre1[i]){
			cout<<i;
			if(pre1[i]==1){
				cout<<" ";
				continue;
			}
			cout<<"("<<pre1[i]<<") ";
		}
	cout<<"\n";
	forn(i,2,1000)
		if(pre2[i]){
			cout<<i;
			if(pre2[i]==1){
				cout<<" ";
				continue;
			}
			cout<<"("<<pre2[i]<<") ";
		}
	cout<<"\n";
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
