//http://www.usaco.org/index.php?page=viewproblem2&cpid=987
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define F first
#define S second
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("word.in","r",stdin);
	freopen("word.out","w",stdout);
	int n,k,a=0;
	cin>>n>>k;
	forn(i,1,n){
		string s;
		cin>>s;
		if(a==0 && a+s.length()<=k){
			cout<<s;
			a+=s.length();
		} else if(a>0 && a+s.length()<=k){
			cout<<" "<<s;
			a+=s.length();
		} else if(a+s.length()>k){
			cout<<endl<<s;
			a=s.length();
		}
	}
	cout<<endl;
}
