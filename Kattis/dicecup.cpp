//Dicecup
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
void swap(int &x,int &y){
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main(){
	int n,m,sum[401],na[401],k=1,x=1,sm[401],y=1,a=1,bil[401];
	scanf("%d %d",&n,&m);
	forn(i,1,400){
		na[i]=1;
		sm[i]=1;
	}
	forn(i,1,n){
		forn(j,1,m){
			sum[k]=i+j;
			k++;
		}
	}
	forn(i,1,k-1){
		forn(j,(i+1),k-1){
			if(sum[i]>sum[j]){
				swap(sum[i],sum[j]);
			}
		}
	}
	forn(i,1,k-1){
		if(sum[i]==sum[i+1]){
			na[x]++;
		} else {
			bil[a]=sum[i-na[x]+1];
			a++;
			x++;
		}
	}
	forn(i,1,x-1){
		forn(j,1,x-1){
			if(na[i]>na[j]){
				swap(na[i],na[j]);
				swap(bil[i],bil[j]);
			}
		}
	}
	printf("%d\n",bil[1]);
	forn(i,2,x-1){
		if(na[i]==na[1]){
			printf("%d\n",bil[i]);
		}
	}
}
