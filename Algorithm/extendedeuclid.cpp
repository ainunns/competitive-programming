#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
typedef long long ll;
ll a,b,c,m;
ll d,x,y;
void ee(ll a, ll b){
	if(b==0){
		d=a;
		x=1;
		y=0;
	} else {
		ee(b,a%b);
		ll tmp=x;
		x=y;
		y=tmp-(a/b)*y;
	}
}
ll inv(ll a, ll b){
	ee(a,b);
	return (x%b+b)%b;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// cin>>a>>b>>c>>m;
	// cout<<((inv(c,m)%m)%m)<<endl;
	cin>>a>>b;
	ee(a,b);
	cout<<x<<" "<<y<<"\n";
}