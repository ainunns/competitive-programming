//Dua Pangkat
#include <iostream>
using namespace std;
int main(){
	long long n;
	cin>>n;
	if (n==1){
		cout<<"ya\n";
	} else {	
		while(n!=1){
			if (n%2!=0){
				cout<<"bukan\n";
				break;
			} else {
				n/=2;
				if (n==1){
					cout<<"ya\n";
				}
			}
		}
	}
}
