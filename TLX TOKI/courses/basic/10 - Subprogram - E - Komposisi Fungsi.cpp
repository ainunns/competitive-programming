/*Komposisi Fungsi*/
#include <iostream>
#include <cmath>
using namespace std;
int kof(int a, int b, int x){
	int rslt;
	rslt=abs((a*x)+b);
	return rslt;
}
int main(){
	int p, q, r, s[6], func;
	cin>>p>>q>>r>>s[1];
	for(int i=1; i<=r; i++){
		func=0;
		func+=kof(p, q, s[i]);
		s[i+1]=func;
	}
	cout<<func<<endl;
	return 0;
}
