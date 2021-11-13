//Quality Adjusted Life Year
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i)
#define rep(t) while(t)
using namespace std;
int main(){
    int n;
    double q,y,sum=0;
    scanf("%d",&n);
    rep(cin>>q>>y){
        sum+=(q*y);
    }
    printf("%.3f\n",sum);
}
