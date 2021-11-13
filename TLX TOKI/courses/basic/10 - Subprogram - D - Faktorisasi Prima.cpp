/*Faktorisasi Prima*/ 
#include <iostream>
using namespace std;
long long int divs, a[10001];
void prime(long long int y){
	long long int j, k, m;
	j=0; m=y;
	for(long long int i=2; i*i<=y; i++){
		while(m%i==0){
			m/=i;
			a[j]++;
		}
		if(m%i!=0){
			if(a[j]==0){
				continue;
			} else if (a[j]>1){
				cout<<i<<"^"<<a[j];
			} else if(a[j]==1){
				cout<<i;
			}
			if(m!=1){
				cout<<" x ";
			} else if(m==1){
				cout<<"\n";
			}
			j++;
		}
	}
	if(m!=1){
		cout<<m<<endl;
	}
}
int main(){
	long long int n;
	cin>>n;
	prime(n);
	return 0;
}
