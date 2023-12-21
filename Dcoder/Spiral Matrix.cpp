//Spiral Matriks
#include <bits/stdc++.h>
using namespace std;
int main(){
	int w,h,index,t=0,r=0,x=0;
	cin>>h>>w;
	int arr[h][w],arb[h][w];
	for(int i=0; i<h; i++)
		for(int j=0; j<h; j++)
			cin>>arr[i][j];
	index=min(h,w);
	int p=w,q=h-1,a=0,b=0;
	for(int i=0; i<index; i++){
		for(int j=0; j<p; j++){
			arb[a][b]=arr[r/w][r%w];
			r++;
			if(j!=p-1) b+=pow(-1,t);
		}
		a+=pow(-1,x);
		x++;
		for(int j=0; j<q; j++){
			arb[a][b]=arr[r/w][r%w];
			r++;
			if(j!=q-1) a+=pow(-1,t);
		}
		b+=pow(-1,x); 
		p--;
		q--;
		t++;
	}
	for(int i=0; i<h; i++){
		for(int j=0; j<w; j++) 
			cout<<arb[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
