//DIVSUM - Divisor Summation
#include <bits/stdc++.h>
using namespace std;
long long n,k,bil[500000],divs[250000],sum;
int main(){
	scanf("%lld",&n);
	for(int i=0; i<n; i++){
		scanf("%lld",&bil[i]);
	}
	for(int i=0; i<n; i++){
		sum=0; k=0; 
		memset(divs,0,sizeof(divs));
		for(int j=2; j*j<=bil[i]; j++){
			if(bil[i]%j==0){
				divs[k]=j;
				sum+=divs[k];
				k++;
				divs[k]=bil[i]/j;
				sum+=divs[k];
			}
		}
		sum++;
		printf("%lld\n",sum);
	}
}
