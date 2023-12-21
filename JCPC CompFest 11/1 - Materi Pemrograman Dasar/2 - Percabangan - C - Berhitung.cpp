//Berhitung
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int a,b;
	char sp1,sp2,ch;
	cin>>a>>ch>>b;
	switch(ch){
		case 42 : cout<<(a*b)<<endl; break;
		case 43 : cout<<(a+b)<<endl; break;
		case 45 : cout<<(a-b)<<endl; break;
		case 47 : cout<<(a/b)<<endl; break;
		case 37 : cout<<(a%b)<<endl; break;
	}
	return 0;
}

