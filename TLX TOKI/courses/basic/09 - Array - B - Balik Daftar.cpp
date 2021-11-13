//Balik Daftar
#include <iostream>
using namespace std;
int main(){
	int i, n, bil[101];
	i=1;
	while(cin>>n){
		bil[i]=n;
		i++; 
	}
	for(int j=(i-1); j>0; j--){
		cout<<bil[j]<<endl;
		if(j==1){
			break;
		}
	}
	return 0;
}
