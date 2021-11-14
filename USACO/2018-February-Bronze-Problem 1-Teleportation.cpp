//http://www.usaco.org/index.php?page=viewproblem2&cpid=807
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
struct axis{
	int x,y;
};
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("teleport.in","r",stdin);
	freopen("teleport.out","w",stdout);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>b) swap(a,b);
	if(c>d) swap(c,d);
	cout<<min(abs(a-b),abs(a-c)+abs(b-d))<<endl;
}
