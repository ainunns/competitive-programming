#include <iostream>
#include <string>
using namespace std;
int main(){
	//tipe data inputan : N=int, S=string
	int N;
	string S;
	cin>>N>>S; //baca input
	int posisi=0; //asumsi posisi awal ada di ketinggian 0
	int daerah_unik=0; //banyaknya daerah unik diasumsikan sama dengan 0 di awal
	for(int i=0; i<N; i++){ //iterasi setiap posisi
		if(S[i]=='U'){
			posisi++; //posisi naik
		} else if(S[i]=='D'){
			if(posisi==0){ 
				//memasuki daerah unik jika dan hanya jika 
				//posisi sekarang berada di ketinggian awal
				daerah_unik++;
			}
			posisi--; //posisi turun
		}
	}
	cout<<daerah_unik<<"\n";
}