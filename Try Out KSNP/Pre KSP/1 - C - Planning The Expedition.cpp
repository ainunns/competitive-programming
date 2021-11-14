#include <iostream>
#include <map>
using namespace std;
int n,m;
map<int, int>a;
int f(int days){
	int org=0;
	for(auto c:a){
		int x,y;
		tie(x,y)=c;
		org+=y/days;
	}
	return org;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++){
		int b;
		scanf("%d",&b);
		a[b]++;
	}
	int l=1,r=1000,mi,ans=0;
	while(l<r){
		mi=(l+r)/2;
		if(f(mi)>=n){
			ans=mi;
			l=mi+1;
		} else
			r=mi;
	}
	printf("%d\n", ans);
}