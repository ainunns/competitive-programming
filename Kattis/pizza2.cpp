//Pizza Crust
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
int main(){
	int r,c;
	scanf("%d %d",&r,&c);
	cout<<fixed;
	cout<<setprecision(6)<<((r-c)*(r-c)*100)/(r*r)<<"\n";
}
