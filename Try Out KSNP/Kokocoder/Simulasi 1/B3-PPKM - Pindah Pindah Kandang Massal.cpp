#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
const ll MX=2e5+5;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); 
	ll n;
	cin>>n;
	vector<int>a(n);
	set<vector<int>>s;
	forn(i,0,n-1) cin>>a[i];
	forn(i,0,n-1){
		forn(j,i,n-1){
			vector<int>tmp=a;
			reverse(tmp.begin()+i, tmp.begin()+j+1);
			s.insert(tmp);
		}
	}
	cout<<(int)s.size()<<"\n";
}