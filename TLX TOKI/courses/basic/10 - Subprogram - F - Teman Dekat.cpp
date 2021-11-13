/*Teman Dekat*/
#include <iostream> 
#include <cmath>
using namespace std;
int y[1000], td[499500], x[1000];
int teman(int x1, int y1, int x2, int y2, int d){
	int times, sigx, sigy;
	sigx=abs(x2-x1); sigy=abs(y2-y1);
	times=(sigx*sigy);
	if(d==1){
		return sigx+sigy;
	} else if (d==2){
		return (teman(x1, y1, x2, y2, 1)*teman(x1, y1, x2, y2, 1))-2*times;
	} else if (d==3){
		return (teman(x1, y1, x2, y2, 1))*(teman(x1, y1, x2, y2, 2)-times); 
	} else if(d>3){
		return 0;
	}
}
int main(){
	int n, d, temp, k;
	cin>>n>>d;
	k=0;
	if(n>1){
		
	for(int i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0; i<(n-1); i++){
		for(int j=(i+1); j<n; j++){
		td[k]=teman(x[i], y[i], x[j], y[j], d);
		k++;
		}
	}
	for(int i=0; i<k; i++){
		for(int j=(i+1); j<k; j++){
			if(td[i]>td[j]){
				temp=td[i];
				td[i]=td[j];
				td[j]=temp;
			}
		}
	}
	cout<<td[0]<<" "<<td[n-1]<<"\n";
	}
	return 0;
}
