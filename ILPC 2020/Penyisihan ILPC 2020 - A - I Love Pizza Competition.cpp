//I Love Pizza Competition
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
int gcd(int x,int y){
	if(y==0){
		return x;
	} else {
		return gcd(y,x%y);
	}
}
int main()
{
	int t,n;
	char c;
	scanf("%d",&t);
	forn(i,1,t){
		scanf("%d",&n);
		int indeks,x[100],y[100];
		bool ada=false;
		double maks=0;
		forn(j,1,n){
			scanf("%d %c %d",&x[j],&c,&y[j]);
			if(x[j]!=0){
				int k=gcd(x[j],y[j]);
				x[j]/=k;
				y[j]/=k;
				if(x[j]>(y[j]*maks)) {
					maks=((double)x[j]/(double)y[j]);
					indeks=j;
				}
			} else {
				ada=true;
				if(maks>0){
					continue;
				}
			}
		}
		if (ada && maks==0){
			cout<<"0\n";
		} else {
			cout<<x[indeks]<<"/"<<y[indeks]<<endl;
		}
	}
	return 0;
}

