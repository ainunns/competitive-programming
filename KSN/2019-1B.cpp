#include <iostream>
#include <cstring>
#include <vector>
#include <climits>
#define ll long long
using namespace std;
const int MX=2e5+5;
ll n,m,s,a,b,p,segtree[4*MX],dp[MX];
bool c[MX];
vector<pair<ll, ll>>v[MX];
void build(int idx,int l, int r){
    if(l==r){
        segtree[idx]=1e18;
        return;
    }
    int mid=l+(r-l)/2;
    build(2*idx,l,mid);
    build(2*idx+1,mid+1,r);
    segtree[idx]=min(segtree[2*idx],segtree[2*idx+1]);
}
ll query(int idx,int l,int r,int x,int y){
    if(l>=x && r<=y)
        return segtree[idx];
    int mid=l+(r-l)/2;
    ll ans=1e18;
    if(x<=mid)
        ans=min(ans,query(2*idx,l,mid,x,y));
    if(y>mid)
        ans=min(ans,query(2*idx+1,mid+1,r,x,y));
    return ans;
}
void upd(int idx,int l,int r,int pos,ll val){
    if(l==r){
        segtree[idx]=val;
        return;
    }
    int mid=l+(r-l)/2;
    if(pos<=mid)
        upd(2*idx,l,mid,pos,val);
    else
        upd(2*idx+1,mid+1,r,pos,val);
    segtree[idx]=min(segtree[2*idx],segtree[2*idx+1]);
}
int main(){
    scanf("%lld %lld %lld",&n,&m,&s);
    for(int i=1; i<=m; i++){
        scanf("%lld %lld %lld",&a,&b,&p);
        v[b].push_back({a,p});
    }
    build(1,0,n);
    for(int i=1; i<=n; i++){
        dp[i]=dp[i-1]+s;
        for(auto [fi,se]:v[i]){
            ll mi=0;
            if(fi>1)
                mi=query(1,1,n,fi-1,i-1);
            // printf("min %lld\n", mi);
            dp[i]=min(dp[i],mi+se);
        }
        // printf("%lld\n", dp[i]);
        upd(1,1,n,i,dp[i]);
        // for(int j=1; j<=n; j++)
            // printf("%lld\n", segtree[j]);
    }
    printf("%lld\n", dp[n]);
}