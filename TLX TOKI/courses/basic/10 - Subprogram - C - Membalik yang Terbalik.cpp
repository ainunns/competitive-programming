/*Membalik yang Terbalik*/
#include <iostream>
using namespace std;
int balik(int k){
	int temp, ret;
	temp=k; ret=0;
	while(temp>0){
		ret=(ret*10)+(temp%10);
		temp=temp/10;
	}
	return ret;
}
int main(){
	int a, b;
	cin>>a>>b;
	cout<<balik(balik(a)+balik(b))<<endl;
	return 0;
}
