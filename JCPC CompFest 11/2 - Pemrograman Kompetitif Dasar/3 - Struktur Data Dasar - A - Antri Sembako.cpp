//Antri Sembako
#include <bits/stdc++.h>
#include <queue>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int n,code[10001],head=1;
	string name[10001];
	queue<string> q;
	scanf("%d",&n);
	forn(i,1,n){
		scanf("%d",&code[i]);
		if(code[i]==1){
			cin>>name[i];
			q.push(name[i]);
		} else if(code[i]==2){
			cout<<q.front()<<endl;
			q.pop();
		}
	}
	return 0;
}

