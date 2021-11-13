//Final-A-prob-Daxta
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
typedef long long int lll;
typedef long long ll;
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int d1,d2,m1,m2,y1,y2;
	cin>>d1>>m1>>y1>>d2>>m2>>y2;
	if(y2>y1){
		m2+=12*(y2-y1);
		y2=y1;
	}
	if(m2>m1){
		d2+=30*(m2-m1);
		m2=m1;
	}
	cout<<d2-d1<<"\n";
	return 0;
}

