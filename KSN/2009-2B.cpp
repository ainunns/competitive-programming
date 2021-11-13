#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n,x,m;
	scanf("%d %d %d",&n,&m,&x);
	vector<int>v(n);
	for(int i=1; i<=n; i++)
		v[i-1]=i;
	int now=0;
	while(x-- && v.size()>1){
		now=(now+m-1)%v.size();
		v.erase(v.begin()+now,v.begin()+now+1);
	}
	for(auto c:v)
		printf("%d\n", c);
}