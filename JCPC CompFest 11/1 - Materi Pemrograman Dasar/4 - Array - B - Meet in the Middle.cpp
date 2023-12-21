//Meet in the Middle
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int n,arr[200],p=1,a[200];
	cin>>n;
	forn(i,1,n) cin>>a[i];
	forn(i,1,(n/2)){
		arr[p++]=a[i];
		arr[p++]=a[n-i+1];
	}
	if(n%2==1){
		arr[p]=a[(n/2)+1];
	}
	forn(i,1,n-1){
		cout<<arr[i]<<" ";
	} 
	cout<<arr[n]<<"\n";
	return 0;
}

