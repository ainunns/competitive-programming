#include <iostream>
#include <map>
#define ll long long
using namespace std;
int main(){
	string s;
	cin>>s;
	ll n;
	cin>>n;
	map<ll, ll>cnt;
	for(int i=1; i<=n; i++){
		ll a;
		cin>>a;
		cnt[a]++;
	}
	ll ans=n*(n-1)*(n-2)/6;
	for(auto [x,y]:cnt){
		ans-=(n-y)*y*(y-1)/2+y*(y-1)*(y-2)/6;
	}
	cout<<ans<<"\n";
}