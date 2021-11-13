//Bilangan Agak Prima
#include <iostream>
using namespace std;
int main(){
	int n, k, divs;
	bool bol;
	cin>>n;
	while(cin>>k){
		bol=false; divs=0;
		if(k>1){
			for(int i=2; i*i<=k; i++){
				if((k%i)==0){
					divs++;
				}
			}
			if(divs<2){
				bol=true;
			}
		} else {
			bol=true;
		}
		if(bol==true){
			cout<<"YA\n";
		} else {
			cout<<"BUKAN\n";
		}
	}
	return 0;
}
