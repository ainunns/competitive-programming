/*Kasur Rusak*/
#include <iostream>
#include <string>
using namespace std;
string s;
bool pal(int i,int j){
	if(i>j) return true;
	else {
		if(s[i]!=s[j]) return false;
		else return pal(i+1,j-1);
	}
}
int main(){
	cin>>s;
	if(pal(0,s.length())) cout<<"YA\n";
	else cout<<"BUKAN\n";
	return 0;
}
