//Pola I
#include <iostream>
using namespace std;
int main(){
	int n, k;
	cin>>n>>k;
	for(int i=1; i<=(n-1); i++){
		if(i%k==0){
			cout<<"* ";
		} else {
			cout<<i<<" ";
		}
	}
	if(n%k==0){
		cout<<"*\n";
	} else {
		cout<<n<<endl;
	}
	return 0;
}
