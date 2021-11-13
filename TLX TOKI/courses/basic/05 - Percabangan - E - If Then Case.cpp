//If Then / Case
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if ((n>0)&&(n<10)){
		cout<<"satuan\n";
	} else if ((n>9)&&(n<100)){
		cout<<"puluhan\n";
	} else if ((n>99)&&(n<1000)){
		cout<<"ratusan\n";
	} else if ((n>999)&&(n<10000)){
		cout<<"ribuan\n";
	} else if ((n>9999)&&(n<100000)){
		cout<<"puluhribuan\n";
	}
	return 0;
}
