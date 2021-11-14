#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;
struct point{
	ll x,y;
};
bool cmp(point a,point b){
	if(a.x<b.x)
		return true;
	else if(a.x==b.x)
		return a.y<b.y;
	return false;
}
bool clockwise(point a,point b,point c){
	return (b.y-a.y)*(c.x-b.x)-(c.y-b.y)*(b.x-a.x)<0;
}
bool counterclockwise(point a,point b,point c){
	return (b.y-a.y)*(c.x-b.x)-(c.y-b.y)*(b.x-a.x)>0;
}
vector<point> ans;
void convexHull(point a[],int n){
	vector<point>up,down;
	up.push_back(a[0]);
	down.push_back(a[0]);
	for(int i=1; i<n; i++){
		if(i==n-1 || !clockwise(a[0],a[i],a[n-1])){
			while(up.size()>=2 && clockwise(up[up.size()-2],up[up.size()-1],a[i]))
				up.pop_back();
			up.push_back(a[i]);
		}
		if(i==n-1 || !counterclockwise(a[0],a[i],a[n-1])){
			while(down.size()>=2 && counterclockwise(down[down.size()-2],down[down.size()-1],a[i]))
				down.pop_back();
			down.push_back(a[i]);
		}
	}
	for(int i=0; i<up.size(); i++)
		ans.push_back(up[i]);
	for(int i=down.size()-2; i>0; i--)
		ans.push_back(down[i]);
}
int main(){
	int n;
	scanf("%d",&n);
	point t[n];
	for(int i=0; i<n; i++)
		scanf("%lld %lld",&t[i].x,&t[i].y);
	sort(t,t+n,cmp);
	convexHull(t,n);
	printf("%lld\n", (ll)ans.size());
	for(auto c:ans)
		cout<<c.x<<" "<<c.y<<"\n";
}