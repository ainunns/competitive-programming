#include <iostream>
#include <string>
using namespace std;
int main(){
	//tipe data inputan : string s
	string s;
	cin>>s; //baca input
	int panjang=s.length(); //ambil panjang
	string ans=""; //deklarasi variabel answer
	for(int i=0; i<panjang; i++){ //iterasi setiap karakter
		for(int j=1; j<=i+1; j++) { //lakukan enkripsi
			ans+=s[i]; 
		}
	}
	cout<<ans<<"\n";
}
