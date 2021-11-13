//Statistika Sederhana
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n,a,le=INT_MIN,ri=INT_MAX;
	cin>>n;
	while(n--){
		cin>>a;
		le=max(le,a);
		ri=min(ri,a);
	}
	cout<<le<<" "<<ri<<endl;
	return 0;
}

