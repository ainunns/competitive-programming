//Plus-Minus
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
using namespace std;
int main(){
    int n,a[101],pl=0,mi=0,ze=0;
    double pls,pms,pzs;
    scanf("%d",&n);
    forn(i,1,n){
        scanf("%d",&a[i]);
    }
    forn(i, 1, n) {
      if (a[i] > 0) {
        pl++;
      } else if (a[i] == 0) {
        ze++;
      } else if (a[i] < 0) {
        mi++;
      }
    }
    pls=pl; pms=mi; pzs=ze;
    pls/=n; pms/=n; pzs/=n;
    printf("%.6f\n",pls);
    printf("%.6f\n",pms);
    printf("%.6f\n",pzs);
}

