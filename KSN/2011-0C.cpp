#include <iostream>
using namespace std;
int main(){
	cout<<"?\n1 2\n3 4"<<endl;
	string s;
	cin>>s;
	if(s=="SEIMBANG"){
		cout<<"?\n5 6\n7 8"<<endl;
		cin>>s;
		if(s=="KIRI"){
			cout<<"?\n5 1\n6 2"<<endl;
			cin>>s;
			if(s=="KANAN")
				cout<<"! 6"<<endl;
			else if(s=="KIRI")
				cout<<"! 5"<<endl;
		} else if(s=="KANAN"){
			cout<<"?\n7 1\n8 2"<<endl;
			cin>>s;
			if(s=="KANAN")
				cout<<"! 8"<<endl;
			else if(s=="KIRI")
				cout<<"! 7"<<endl;			
		}
	} else if(s=="KIRI"){
		cout<<"?\n1 5\n2 6"<<endl;
		cin>>s;
		if(s=="KIRI")
			cout<<"! 1"<<endl;
		else
			cout<<"! 2"<<endl;
	} else if(s=="KANAN"){
		cout<<"?\n3 5\n4 6"<<endl;
		cin>>s;
		if(s=="KIRI")
			cout<<"! 3"<<endl;
		else
			cout<<"! 4"<<endl;
	}
}