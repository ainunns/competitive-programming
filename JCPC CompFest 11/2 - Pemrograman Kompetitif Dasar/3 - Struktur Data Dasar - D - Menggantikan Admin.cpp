//Menggantikan Admin
#include <bits/stdc++.h>
#include <set>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int main(){
	int n;
	string s,k,ask="TANYA",en="DAFTAR";
	map<string,int> m;
	scanf("%d",&n);
	forn(i,1,n){
		cin>>k;
		if(k==en){
			cin>>s;
			m[s]++;
		} else if(k==ask){
			cin>>s;
			cout<<m[s]<<endl;
		}
	}
	return 0;
}
