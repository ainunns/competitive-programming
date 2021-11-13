//ABC
#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <algorithm>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	int a[3];
	vector <int> v;
	string s;
	forn(i,0,2){
		scanf("%d",&a[i]);
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	cin>>s;
	forn(i,0,2){
		if(s[i]==65){
			printf("%d",v[0]);
		} else if(s[i]==66){
			printf("%d",v[1]);
		} else if(s[i]==67){
			printf("%d",v[2]);
		}
		printf(" ");
	}
	printf("\n");
}
