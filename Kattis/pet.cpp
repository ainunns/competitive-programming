//Problem Name
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
#define rep(t) while(t)
using namespace std;
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}
int main(){
    int a1[5],a2[5],a3[5],a4[5],sum[5],kbrp[5],temp;
    memset(sum,0,sizeof(sum));
    forn(i,0,4){
        scanf("%d %d %d %d",&a1[i],&a2[i],&a3[i],&a4[i]);
        kbrp[i]=(i+1);
        sum[i]=a1[i]+a2[i]+a3[i]+a4[i];
    }
    forn(i,0,4){
        forn(j,(i+1),4){
            if(sum[i]<sum[j]){
                swap(sum[i],sum[j]);
                swap(kbrp[i],kbrp[j]);
            }
        }
    }
    printf("%d %d\n",kbrp[0],sum[0]);
}

