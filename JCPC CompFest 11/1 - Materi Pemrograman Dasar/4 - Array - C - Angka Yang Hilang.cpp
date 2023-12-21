//Angka Yang Hilang
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int main(){
	int n,k,a;
	bool memo[100001];
	memset(memo,false,sizeof(memo));
	scanf("%d %d",&n,&k);
	forn(i,1,k){
		scanf("%d",&a);
		memo[a]=true;
	}
	int p=n-k;
	forn(i,1,n){
		if(!memo[i]){
			printf("%d",i);
			if(p>1){
				p--;
				printf(" ");
			}
		}
	}
	printf("\n");
}
