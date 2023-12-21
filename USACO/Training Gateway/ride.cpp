/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: ainunsy1
TASK: ride
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
    long long sum1=1,sum2=1;
    fin>>a>>b;
//	cin>>a>>b;
    forn(i,0,a.length()-1){
//    	printf("%d ",a[i]-64);
    	sum1*=(a[i]-64);
    	sum1%=47;
	}
	printf("\n");
	forn(i,0,b.length()-1){
		sum2*=(b[i]-64);
//		printf("%d ",b[i]-64);
		sum2%=47;
	}
	printf("\n%lld %lld\n",sum1,sum2);
	if(sum1==sum2){
		fout<<"GO\n";
//		cout<<"GO\n";
	} else {
		fout<<"STAY\n";
//		cout<<"STAY\n";
	}
}
