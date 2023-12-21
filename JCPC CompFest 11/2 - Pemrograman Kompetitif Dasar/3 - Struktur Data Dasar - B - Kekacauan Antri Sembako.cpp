//Kekacauan Antri Sembako
#include <bits/stdc++.h>
#include <deque>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	long long n,code[10001],m=1;
	string name[10001],out[10001];
	deque<string> q;
	scanf("%lld",&n);
	forn(i,1,n){
		scanf("%lld",&code[i]);
		if(code[i]==1){
			cin>>name[i];
			q.push_front(name[i]);
		} else if(code[i]==2){
			cin>>name[i];
			q.push_back(name[i]);
		} else if(code[i]==3){
			out[m]=q.front();
			m++;
			q.pop_front();
		} else if(code[i]==4){
			out[m]=q.back();
			m++;
			q.pop_back();
		}
	}
	forn(i,1,m-1){
		cout<<out[i]<<endl;
	}
	return 0;
}

