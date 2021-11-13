//Modus Terbesar
#include <iostream>
using namespace std;
int main(){
	int n, bil[100001], count[100001]={0},maks=0,ans=0;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>bil[i];
		count[bil[i]]++;
		if(maks<count[bil[i]]){
			maks=count[bil[i]];
			if(ans<bil[i]) ans=bil[i];
		} else if(maks==count[bil[i]]){
			if(ans<bil[i]) ans=bil[i];
		}
	}
	cout<<ans<<"\n";
	return 0;
}
