/*Gaya Penulisan Variabel*/
#include <iostream>
#include <string> 
using namespace std;
int k; string us="_";
void camel(string s){
	k=s.length();
	for(int i=0; i<k; i++){
		if(s[i]==95){
			s[i+1]-=32;
		}
	}
	while((s.find(us)>=0)&&(s.find(us)<=(s.length()))){
		s.erase((s.find(us)), 1);
	}
	cout<<s<<endl;
}
void snake(string s){
	k=s.length();
	for(int i=1; i<k; i++){	
		if((s[i]>=65)&&(s[i]<=90)){
			s.insert(i, us);
			s[i+1]+=32;
			k++;
		}
	}
	cout<<s<<endl;
}
int main(){
	string s; 
	int k;
	cin>>s; k=s.length();
	if((k>0)&&(k<=100)){
		for(int i=0; i<k; i++){
			if(s[i]==95){
				camel(s);
				break;
			} else if((s[i]>=65)&&(s[i]<=90)){
				snake(s);
				break;
			} 
			if(i+1==k){
				cout<<s<<endl;
				break;
			}
		} 
	}
	return 0;
}
