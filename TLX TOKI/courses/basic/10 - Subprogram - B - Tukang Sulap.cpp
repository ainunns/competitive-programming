/*Tukang Sulap*/
#include <iostream>
void swap(int &a,int &b){
	int tmp=a;
	a=b;
	b=tmp;
}
using namespace std;
int main(){
	int temp[1001], n, q, a[1001], b[1001], r[1001], x[1001];
	char e[1001], t[1001];
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	for(int i=1; i<=n; i++){
		cin>>b[i];
	}
	cin>>q;
	for(int i=1; i<=q; i++){
		cin>>e[i]>>x[i]>>t[i]>>r[i];
		if(e[i]=='A'){
			if(t[i]=='A'){
				swap(a[x[i]],a[r[i]]);
			} else if(t[i]=='B'){
				swap(a[x[i]],b[r[i]]);
			}
		} else if (e[i]=='B'){
			if(t[i]=='A'){
				swap(b[x[i]],a[r[i]]);
			} else if(t[i]=='B'){
				swap(a[x[i]],a[r[i]]);
			}
		}
		if(i==q){
			for(int j=1; j<n; j++){
				cout<<a[j]<<" ";
			}
			cout<<a[n]<<endl;
			for(int j=1; j<n; j++){
				cout<<b[j]<<" ";
			}
			cout<<b[n]<<endl;
		} else {
			continue;
		}
	}
	return 0;
}
