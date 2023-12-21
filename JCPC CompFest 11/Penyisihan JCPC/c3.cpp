//Belajar Berhitung
#include <bits/stdc++.h>
#define forn(i,a,b) for(unsigned long long int i=a; i<=b; i++)
#define ford(i,a,b) for(unsigned long long int i=a; i>=b; i--)
#define rep(t) while(t)
using namespace std;
typedef unsigned long long int ull;
ull n,r[100001],l[100001];
int main(){
	cin>>n;
	cin>>l[1]>>r[1];
	ull min=l[1],max=r[1];
	forn(i,2,n){
		cin>>l[i]>>r[i];
		if(min>l[i]){
			min=l[i];
		}
		if(max<r[i]){
			max=r[i];
		}
	}
	ull ko=max-min+1,ce=max+min;
	if((ko)%2==0){
		(ko)/=2;
	} else if((ce)%2==0){
		(ce)/=2;
	}
	cout<<(ko*ce)<<endl;
	return 0;
}

