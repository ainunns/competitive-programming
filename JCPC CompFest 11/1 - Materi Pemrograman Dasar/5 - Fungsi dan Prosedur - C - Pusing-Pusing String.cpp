//Pusing-Pusing String
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
void tc(string &s, int x, int y){
	char temp;
	temp=s[x-1];
	s[x-1]=s[y-1];
	s[y-1]=temp;
}
int main(){
	string s;
	int n,q,op[1001],a[1001],b[1001];
	scanf("%d %d",&n,&q);
	cin>>s;
	forn(i,1,q){
		scanf("%d %d %d",&op[i],&a[i],&b[i]);
	}
	forn(i,1,q){
		if(op[i]==1){
			tc(s,a[i],b[i]);
		} else if(op[i]==2){
			while(a[i]<b[i]){
				tc(s,a[i],b[i]);
				a[i]++;
				b[i]--;
			}
		}
	}
	cout<<s<<endl;
	return 0;
}

