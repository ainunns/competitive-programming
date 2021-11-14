//http://www.usaco.org/index.php?page=viewproblem2&cpid=591
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define F first
#define S second
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("promote.in","r",stdin);
	freopen("promote.out","w",stdout);
	pair<int,int> x[4];
	int add=0;
	forn(i,0,3) cin>>x[i].F>>x[i].S;
	int a=0,b=0,c=0;
	forn(i,-3,0){
		if(abs(i)>2) a+=x[abs(i)].S-x[abs(i)].F;
		if(abs(i)>1) b+=x[abs(i)].S-x[abs(i)].F;
		if(abs(i)>0) c+=x[abs(i)].S-x[abs(i)].F;
	}
	cout<<c<<endl<<b<<endl<<a<<endl;
}
