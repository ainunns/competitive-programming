/*Komposisi Fungsi II*/
#include <iostream>
#include <cmath>
using namespace std;
int kof(int a, int b, int k, int x){
	if(k==1){
		return (abs((a*x)+b));
	} else if(k>=2){
		return (abs((a*(kof(a, b, (k-1), x)))+b));
	} 
}
int main(){
	int a, b, k, x;
	cin>>a>>b>>k>>x;
	cout<<kof(a, b, k, x)<<endl;
	return 0;
}
