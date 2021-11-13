//Rotasi Matriks
#include <iostream>
using namespace std;
int main(){
	int m, n, mn[101][101];
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>mn[i][j];
		}
	}
	for(int j=1; j<=m; j++){
		for(int i=n; i>0; i--){
			cout<<mn[i][j];
			if(i!=1){
				cout<<" ";
			}
		}
		cout<<"\n";
	}
	return 0;
}
