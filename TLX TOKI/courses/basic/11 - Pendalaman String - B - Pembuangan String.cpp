/*Pembuangan string*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s, t;
	cin>>s>>t;
	while((0<=s.find(t)&&(s.find(t)<=s.length()))){
		s.erase(s.find(t), t.length());
	}
	cout<<s<<endl;
	return 0;
}
