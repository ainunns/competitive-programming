//Time-Conversion
#include <bits/stdc++.h>
#include <string>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
using namespace std;
int main(){
    string s,jams,nn="00",pm,pam="AM",ppm="PM",dbs="12";
    int dbi,jami;
    cin>>s;
    pm=s.substr(8,2);
    jams=s.substr(0,2);
    dbi=stoi(dbs);
    jami=stoi(jams);
    if(pm==ppm){
        jami+=12;
        cout<<jami;
    }
    /*if ((jams == dbs)&&(pm==ppm)) {
        s.erase(8,2);
        s.erase(0,2);
        s.insert(0,nn);
    } else if((jams==dbs)&&(pm==pam)){
        s.erase(8,2);
    } else if ((jami > dbi)&&(pm==ppm)) {
      jami += 12;
      printf("%d\n", jami);
    }
    cout<<s<<endl;*/
}
