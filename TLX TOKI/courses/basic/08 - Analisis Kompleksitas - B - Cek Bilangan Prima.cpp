//Cek Bilangan Prima
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, k;
	bool bol;
	cin>>n;
	//read n numbers
	while(cin>>k){
		bol=true;
		if(k>1){
			for(int i=2; i*i<=k; i++){
				if((k%i)==0){
					bol=false;
					break;
				} 
			}
		} else if(k<2){
			bol=false;
		}
		if(bol==false){
			cout<<"BUKAN\n";
		} else {
			cout<<"YA\n";
		}
	}
	return 0;
}
