/*
ID: ainunsy1
TASK: milk2
LANG: C++
*/
#include <bits/stdc++.h>
#include <fstream>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
int main(){
	long long n,s[5001],e[5001];
	ofstream fout("milk2.out");
	ifstream fin("milk2.in");
	//cin>>n;
	fin>>n;
	long long maks=0,mins=2000000;
	forn(i,1,n){
		//cin>>s[i]>>e[i];
		fin>>s[i]>>e[i];
		maks=max(maks,e[i]);
		mins=min(mins,s[i]);
	}
	sort(s,s+n);
	sort(e,e+n);
	long long l=0,pan=0,k=0,pen=0,milk=0;
	while(mins<=maks){
		forn(i,1,n){
			if(mins==s[i]){
				milk++;
			}
			if(mins==e[i]){
				milk--;
			}
		}
		if(milk==0){
			pen++;
			k=max(k,pan);
			pan=0;
		} else {
			pan++;
			l=max(l,pen);
			pen=0;
		}
		mins++;
	}
	//cout<<k<<" "<<l<<endl;
	fout<<k<<" "<<l<<endl;
	return 0;
}

