//Spiral City
#include <bits/stdc++.h>
#define forn(i,a,b) for(long long int i=a; i<=b; i++)
using namespace std;
long long int t,n,k,l,d[100000001];
string before;
int main(){
	before="West";
	k=0,l=1;
	forn(i,1,31623){
		if(before=="West"){
			forn(j,1,i){
				before="North";
				d[k]=1;
				k++;
			}
		} else if(before=="North"){
			forn(j,1,i){
				before="East";
				d[k]=2;
				k++;
			}
		} else if(before=="East"){
			forn(j,1,i){
				before="South";
				d[k]=3;
				k++;
			}
		} else if(before=="South"){
			forn(j,1,i){
				before="West";
				d[k]=4;
				k++;
			}
		}
		if(before=="West"){
			forn(j,1,i){
				before="North";
				d[k]=1;
				k++;
			}
		} else if(before=="North"){
			forn(j,1,i){
				before="East";
				d[k]=2;
				k++;
			}
		} else if(before=="East"){
			forn(j,1,i){
				before="South";
				d[k]=3;
				k++;
			}
		} else if(before=="South"){
			forn(j,1,i){
				before="West";
				d[k]=4;
				k++;
			}
		}
	}
	cin>>t;
	forn(i,1,t){
		cin>>n;
		if(d[n]==1){
			cout<<"North\n";
		} else 
		if(d[n]==2){
			cout<<"East\n";
		} else 
		if(d[n]==3){
			cout<<"South\n";
		} else 
		if(d[n]==4){
			cout<<"West\n";
		} 
	}
}
