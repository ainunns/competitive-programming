//Final-J-prob-Hukuman II
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;
int n,x[2000000],g[10]={0},maks=0,ansl[2000000],ansr[2000000];
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	forn(i,1,n){
		cin>>x[i];
		g[x[i]]++;
		if(maks<g[x[i]]){
			ansl[i]=x[i];
			maks=g[x[i]];
		} else if(maks==g[x[i]]){
			ansl[i]=min(x[i],ansl[i-1]);
		} else ansl[i]=ansl[i-1];
	}
	maks=0;
	memset(g,0,sizeof(g));
	ford(i,n,1){
		g[x[i]]++;
		if(maks<g[x[i]]){
			ansr[i]=x[i];
			maks=g[x[i]];
		} else if(maks==g[x[i]]){
			ansr[i]=min(x[i],ansr[i+1]);
		} else ansr[i]=ansr[i+1];
	}
	int q,p;
	string c;
//	cout<<ansl[1];
	cin>>q;
	while(q--){
		cin>>c>>p;
		if(c=="L"){
			cout<<ansl[p]<<"\n";
		} else {
			cout<<ansr[n-p+1]<<"\n";
		}
	}
	return 0;
}

