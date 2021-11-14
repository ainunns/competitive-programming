//http://www.usaco.org/index.php?page=viewproblem2&cpid=939
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
struct axis{
	int x,y;
};
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("buckets.in","r",stdin);
	freopen("buckets.out","w",stdout);
	string s;
	axis bar,rock,lake;
	char p;
	forn(i,1,10){
		forn(j,1,10){
			cin>>p;
			if(p=='B') { bar.x=i; bar.y=j;};
			if(p=='R') { rock.x=i; rock.y=j;};
			if(p=='L') { lake.x=i; lake.y=j;};
		}
	}
	int a,b,c;
	a=abs(bar.x-rock.x)+abs(bar.y-rock.y);
	b=abs(bar.x-lake.x)+abs(bar.y-lake.y);
	c=abs(lake.x-rock.x)+abs(lake.y-rock.y);
	if((bar.x == lake.x || bar.y==lake.y) && b==a+c) cout<<b+1<<endl;
	else cout<<b-1<<endl;
}
