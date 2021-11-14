#include <iostream>
using namespace std;
int main(){
	int a, b;
	long long sum;
	cin>>a>>b;
	sum=0;
	while(a<=b){
		sum+=(a*a);
		a++;
	}
	cout<<sum<<endl;
	return 0;
}
