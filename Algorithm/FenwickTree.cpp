//author : ainunsy1
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define fi first
#define se second
using namespace std;
typedef long long ll;
const int MX=3e5+5;
struct fenwickTree{
	int fwt[MX+1];
	void reset(){
		for(int i=0; i<=MX; i++)
			fwt[i]=0;
	}
	void upd(int i,int va){
		for(; i<=MX; i+=(i&-i))
			fwt[i]+=va;
	}
	int query(int i){
		int sum=0;
		for(; i; i-=(i&-i))
			sum+=fwt[i];
		return sum;
	}
} fenwick;
void solve(){
	fenwick.reset();
	forn(i,1,8) {
		int a;
		cin>>a;
		fenwick.upd(i,a);
	}
	cout<<fenwick.query(6)-fenwick.query(2)<<"\n";
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int tc=1;
	// cin>>tc;
	forn(i,1,tc){
		solve();
	}
}