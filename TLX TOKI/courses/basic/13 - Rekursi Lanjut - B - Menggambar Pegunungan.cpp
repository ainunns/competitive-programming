//Menggambar Pegunungan
#include <iostream>
#include <cmath>
using namespace std;
void p(int n){
	if(n==1){
		cout<<"*\n";
	} else if(n>1){
		p(n-1);
		for(int i=1; i<=n; i++){
			cout<<"*";
		}
		cout<<"\n";
		p(n-1);
	}
}
int main(){
	int n;
	cin>>n;
	p(n);
	return 0;
}
