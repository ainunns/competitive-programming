//Datum
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
	int d,m,hari;
	string day[7]={"Thursday","Friday","Saturday","Sunday","Monday","Tuesday","Wednesday"};
	scanf("%d %d",&d,&m);
	switch(m){
		case 1 : hari=d-1; break; //Jan
		case 2 : hari=30+d; break; //feb
		case 3 : hari=58+d; break; //mar
		case 4 : hari=89+d; break; //apr
		case 5 : hari=119+d; break; //may
		case 6 : hari=150+d; break; //jun
		case 7 : hari=180+d; break; //jul
		case 8 : hari=211+d; break; //august
		case 9 : hari=242+d; break; //sept
		case 10 : hari=272+d; break; //oct
		case 11 : hari=303+d; break; //nov
		case 12 : hari=333+d; break; //dec
	}
	switch(hari%7){
		case 0 : cout<<day[0]<<endl; break;
		case 1 : cout<<day[1]<<endl; break;
		case 2 : cout<<day[2]<<endl; break;
		case 3 : cout<<day[3]<<endl; break;
		case 4 : cout<<day[4]<<endl; break;
		case 5 : cout<<day[5]<<endl; break;
		case 6 : cout<<day[6]<<endl; break;
	}
}
