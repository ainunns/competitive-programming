#include <iostream>
using namespace std;
int main(){
	int k;
	scanf("%d",&k);
	bool ada=false;
	int r=-1,c=-1;
	for(int i=1; i*i<=k; i++){
		if(k%i==0){
			if(i<5)
				continue;
			if(k>=i*5){
				r=i;
				c=k/i;
				ada=true;
			}
		}
	}
	if(!ada){
		puts("-1");
		return 0;
	}
	string s[5]={"aiueo","oaiue","eoaiu","ueoai","iueoa"},ans="";
	for(int i=0; i<r; i++){
		string a="";
		for(int j=0; j<c; j++)
			a+=s[i%5][j%5];
		ans+=a;
	}
	printf("%s\n", ans.c_str());
}