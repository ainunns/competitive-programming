//Ini Apa Ya?
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7;
using namespace std;
int main(){
	string s;
	int l1=0,l2=0;
	cin>>s;
	if(s[0]==45){
		printf("bilangan bulat negatif\n");
	} else if(s[0]==48){
		printf("nol\n");
	} else{
		forn(i,0,s.length()-1){
			if(s[i]>=48 && s[i]<=57){
				l1++;
			}
			if(s[i]>=97 && s[i]<=122){
				l2++;
			}
		}
		if(l1==s.length()){
			printf("bilangan bulat positif\n");
		}
		if(l2==s.length()){
			printf("kata\n");
		} 
	}	
	return 0;
}

