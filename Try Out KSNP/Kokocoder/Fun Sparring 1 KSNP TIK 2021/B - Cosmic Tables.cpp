#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int n,m,k;
	cin>>n>>m>>k;
	int a[n+1][m+1],r[n+1],c[m+1];
	for(int i=1; i<=n; i++)
		r[i]=i;
	for(int i=1; i<=m; i++)
		c[i]=i;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin>>a[i][j];
	while(k--){
		char b;
		int x,y;
		cin>>b>>x>>y;
		if(b=='g')
			cout<<a[r[x]][c[y]]<<"\n";
		else if(b=='r')
			swap(r[x],r[y]);
		else if(b=='c')
			swap(c[x],c[y]);
	}
}