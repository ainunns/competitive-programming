//A New Alphabet
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
#define max 1e9+7
using namespace std;
int main(){
    string s;
    long long le;
    getline(cin, s);
    le=s.length();
    for(int i=0; i<le; i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]+=32;
        }
        switch (s[i]){
            case 97:cout<<"@"; break;
            case 98:cout<<"8"; break;
            case 99:cout<<"("; break;
            case 100:cout<<"|)"; break;
            case 101:cout<<"3"; break;
            case 102:cout<<"#"; break;
            case 103:cout<<"6"; break;
            case 104:cout<<"[-]"; break;
            case 105:cout<<"|"; break;
            case 106:cout<<"_|"; break;
            case 107:cout<<"|<"; break;
            case 108:cout<<"1"; break;
            case 109:cout<<"[]\\/[]"; break;
            case 110:cout<<"[]\\[]"; break;
            case 111:cout<<"0"; break;
            case 112:cout<<"|D"; break;
            case 113:cout<<"(,)"; break;
            case 114:cout<<"|Z"; break;
            case 115:cout<<"$"; break;
            case 116:cout<<"']['"; break;
            case 117:cout<<"|_|"; break;
            case 118:cout<<"\\/"; break;
            case 119:cout<<"\\/\\/"; break;
            case 120:cout<<"}{"; break;
            case 121:cout<<"'/"; break;
            case 122:cout<<"2"; break;
        }
    }
    cout<<"\n";
    return 0;
}
