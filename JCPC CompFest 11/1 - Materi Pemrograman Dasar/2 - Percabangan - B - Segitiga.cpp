//Segitiga
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	int a[3],panjang;
	vector<int> v;
	bool bener=false;
	forn(i,0,2){
		scanf("%d",&a[i]);
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	if((v[0]+v[1])>v[2]){
		printf("segitiga\n");
	} else {
		printf("bukan segitiga\n");
	}
	return 0;
}

