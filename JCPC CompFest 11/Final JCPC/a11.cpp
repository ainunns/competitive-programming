//Menghapus Karakter
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long n,k;
	string s;
	vector<char> v;
	scanf("%lld %lld",&n,&k);
	cin>>s;
	forn(i,0,n-1){
		v.push_back(s[i]);
	}
	sort(v.begin(),v.end());
	printf("%c\n",v[k-1]);
	return 0;
}

