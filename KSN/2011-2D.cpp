#include <iostream>
#include <map>
using namespace std;
int main(){
	map<char, char>ps,pk;
	for(char i='A'; i<='Z'; i++)
		ps[i]=pk[i]='?';
	int n;
	scanf("%d",&n);
	char s[n],k[n],p[n];
	scanf("%s %s %s",s,k,p);
	for(int i=0; i<n; i++){
		if((ps[s[i]]!='?' && ps[s[i]]!=k[i]) || (pk[k[i]]!='?' &&pk[k[i]]!=s[i])){
			puts("Pak Dengklek bingung");
			return 0;
		}
		ps[s[i]]=k[i];
		pk[k[i]]=s[i];
	}
	for(int i=0; i<n; i++)
		printf("%c", pk[p[i]]);
}