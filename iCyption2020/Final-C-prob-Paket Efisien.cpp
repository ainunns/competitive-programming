//Final-C-prob-Paket Efisien
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a,b,c,k,x,paket=INT_MAX,ans1,ans2;
	cin>>a>>b>>c;
	bool found=false;
	for(int i=0; i<=(c/a); i++){
		k=(c-(a*i));
		if(k%b==0){
			found=true;
			k/=b;
			if(paket>i+k){
				paket=i+k;
				ans1=i;
				ans2=k;
			}
		}
	}
	if(!found) cout<<"Pesan Ulang\n";
	else cout<<ans1<<" "<<ans2<<"\n";
	return 0;
}

