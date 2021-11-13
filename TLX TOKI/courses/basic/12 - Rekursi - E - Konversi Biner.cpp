//Konversi Biner
#include <iostream>
using namespace std;
int bil;
void bin(int x){
	if(x==1) cout<<1;
	else {
		bin(x/2);
		if(x%2==1) cout<<1;
		else cout<<0;
	}
}
int main(){
	long long n;
	cin>>n;
	bin(n);
	cout<<"\n";
	return 0;
}
