/* Use the slash-star style comments or the system won't see your
   identification information */
/*
ID: ainunsy1
TASK: gift1
LANG: C++                 
*/
/* LANG can be C++11 or C++14 for those more recent releases */
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define reset(r,c) memset(r,c,sizeof(r))
using namespace std;
int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int np,money,giv,pl,am[11];
    string name[11],nm,rec[11];
    reset(am,0);
    fin>>np;
//	cin>>np;
    forn(i,1,np){
    	fin>>name[i];
//		cin>>name[i];
	}
	while(fin>>nm){
		fin>>money>>giv;
//		fout<<money<<giv;
//		cin>>money>>giv;
		if(giv!=0){
			pl=money/giv;
			forn(i,1,np){
				if(nm==name[i]){
					am[i]-=(pl*giv);
				}
			}
			forn(i,1,giv){
				fin>>rec[i];
//				cin>>rec[i];
				forn(j,1,np){
					if(rec[i]==name[j]){
						am[j]+=pl;
					}
				}
			}
		}
	}
	forn(i,1,np){
		fout<<name[i]<<" "<<am[i]<<"\n";
//		cout<<name[i]<<" "<<am[i]<<"\n";
	}
}
