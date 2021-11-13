//Count Unique Number
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<b; i++)
#define ford(i,a,b) for(int i=a; i>b; i--)
using namespace std;

int main()
{
	long long int factor[1001],prime[200],k=2;
	bool counted[1001];
	memset(counted,false,sizeof(counted));
	memset(factor,0,sizeof(factor));
	prime[1]=2;
	counted[1]=true;
	for(int i=3; i<=1000; i+=2){
		bool ya=true;
		for(int j=2; j*j<=i; j++){
			if(i%j==0){
				ya=false;
				break;
			}
		}
		if(ya){
			counted[i]=true;
			prime[k]=i;
			k++;
		}
	}
	factor[2]=k-1;
	forn(i,4,1000){
		int l=i,count=0,fact=1;
		if(!counted[i]){
			for(int j=2; j*j<=i; j++){
				while(l%j==0){
					l/=j;
					count++;
				} 
				if(l%j!=0){
					fact*=(count+1);
					count=0;
				}
			}
			factor[fact]++;
		}
	}
	cout<<factor[4];
	return 0;
}

