//Final-B-prob-Cokelat Gratis
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll s,h,c;
	cin>>s>>h>>c;
	ll permen=s/h,sisa=0,ans=permen,wkw=permen+sisa;
	while(permen>=1 && wkw>=c){
		ans+=(wkw/c);
		sisa=wkw%c;
		permen=wkw/c;
		wkw=permen+sisa;
	}
	cout<<ans<<"\n";
	return 0;
}

