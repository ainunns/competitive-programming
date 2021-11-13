/*Caesar Cipher*/
#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	int k;
	cin>>s>>k;
	for(int i=0; i<s.length(); i++){
		if(s[i]+k>122){
			s[i]=((s[i]+k)%122)+96;
		} else {
			s[i]+=k;
		}
	}
	cout<<s<<endl;
	return 0;
}
