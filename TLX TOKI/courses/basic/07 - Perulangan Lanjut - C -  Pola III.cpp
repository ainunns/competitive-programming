//Pola III
#include <iostream>
using namespace std;
int main(){
	int n, m;
	cin>>n;
	m=0;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=i; j++){
			cout<<m;
			m++;
			if(m==10){
				m=0;
			}
		}
		cout<<"\n";
	}
	return 0;
}
