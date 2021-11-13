//Floor dan Ceiling
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double f;
	cin>>f;
	int g=(int)f;
	if(f>=0){
		if(g==f) cout<<g<<" "<<g<<endl;
		else cout<<g<<" "<<g+1<<endl;
	} else {
		if(g==f) cout<<g<<" "<<g<<endl;
		else cout<<g-1<<" "<<g<<endl;
	}
	return 0;
}
