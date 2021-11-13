//Pasokan Listrik
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int t,n,d=500,e=650,f=400,g=350,i=600,h=250;
	string res;
	cin>>t;
	for(int k=0;k<t;k++){
		cin>>n;
		if(n >= 1000){
			res = "pusat - c ";
			if(n>= e + d){
				cout << res <<"- d"<<endl;
			}
			else{
				cout<<res<<"- e"<<endl;
			}
		}	
 
		else if(n > 500 && n < 1000){
			res = "pusat - a ";
			if(n >= (f+g)){
				cout<< res <<"- f"<<endl;
			}
			else{
				cout<<res<<"- g"<<endl;
			}
		}
 
		else{
			res = "pusat - b ";
			if(n < (i - h)){
				cout<<res<<"- i"<<endl;
			}
			else{
				cout<<res<<"- h"<<endl; 
			}
		}
	}	
	return 0;
 
}
