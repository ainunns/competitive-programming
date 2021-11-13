//Jarak Manhattan
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	long long x1, y1, x2, y2;
	cin>>x1>>y1>>x2>>y2;
	long long a=x1-x2,b=y1-y2;
	if(a<0) a*=-1;
	if(b<0) b*=-1;
	cout<<a+b<<endl;
	return 0;
}
