#include <iostream>
#include <map>
#define ll long long
using namespace std;
map<ll, bool>ma;
int main(){
	for(ll i=1; ; i++){
		if(i*(i+1)>=2000000000) //god pls guide me on ksnp :((
			break;
		ma[i*(i+1)/2]=1;
	}
	ll n;
	scanf("%lld",&n);
	for(auto c:ma){
		if(c.second && ma[n-c.first]){
			puts("YES");
			return 0;
		}
	}
	puts("NO");
}