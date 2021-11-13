/*Faktorial Ganjil-Genap*/
#include <iostream>
using namespace std;
int fpp(int x){
	if(x==1){
		return 1;
	} else if(x%2==0){
		return (x/2)*fpp(x-1);
	} else if(x%2==1){
		return x*fpp(x-1);
	}
}
int main(){
	int x;
	cin>>x;
	cout<<fpp(x)<<endl;
	return 0;
}
