//author : ainunsy1
#include <cstdio>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#define forn(i,a,b) for(int i=a; i<=b; i++)
#define ford(i,a,b) for(int i=a; i>=b; i--)
using namespace std;
typedef long long ll;
int n,dr[]={0,1,-1,0},dc[]={1,0,0,-1},cnt=0;
vector<int>adjh[1001],adjv[1001];
void solve(){
	scanf("%d",&n);
	forn(i,1,n*n){
		int mi=-1;
		int a,b;
		scanf("%d %d",&a,&b);
		// printf("==================\n");
		int l=a-1,r=n-a;
		// printf("Range up:%d, Range down:%d\n",l,r);
		for(auto c:adjv[b]){
			// printf("Pair %d %d\n",c,b);
			if(c>a) r--;
			else if(c<a) l--;
		}
		// printf("Phase 1: %d %d\n",l,r);
		mi=max(l,r);
		l=b-1,r=n-b;
		// printf("Range left:%d, Range right:%d\n",l,r);
		for(auto c:adjh[a]){
			// printf("Pair %d %d\n",a,c);
			if(c>b) r--;
			else if(c<b) l--;
		}
		// printf("Phase 2: %d %d\n",l,r);
		mi=max(mi,max(l,r));
		adjh[a].push_back(b);
		adjv[b].push_back(a);
		cnt+=mi;
	}
	printf("%d\n",cnt);
}
int main(){
	int t=1;
	// cin>>t;
	forn(i,1,t){
		solve();
	}
}
