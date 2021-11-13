#include <iostream>
using namespace std;
int main(){
	char s[10];
	scanf("%s",s);
	int n,m;
	while(true){
		scanf("%d %d",&n,&m);
		printf("%d %d\n", min(n,m),min(n,m));
		fflush(stdout);
	}
}