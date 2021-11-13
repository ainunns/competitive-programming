//Everywhere
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	int t,n,count;
	string s[101];
	vector <string> v;
	scanf("%d",&n);
	forn(i,1,n){
		scanf("%d",&t);
		count=0;
		forn(j,1,t){
			cin>>s[j];
			v.push_back(s[j]);
		}
		sort(v.begin(),v.end());
		forn(j,1,t-1){
			if(v[j]!=v[j+1]){
				count++;
			}
		}
		printf("%d\n",count);
	}
}
