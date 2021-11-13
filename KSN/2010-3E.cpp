#include <iostream>
using namespace std;
int main(){
	int l=1,r=9999,mi;
	while(l<=r){
		mi=(l+r)/2;
		cout.fill('0');
		cout.width(4);
		cout<<mi<<endl;
		string s;
		cin>>s;
		if(s=="pulang")
			break;
		else
			r=mi;
	}
}