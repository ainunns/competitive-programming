#include <iostream>
#include <map>
using namespace std;
const int MX=2e5;
int n,r,a,b,c,par[MX+1],si[MX+1];;
int fi(int x){
	if(x==par[x])
		return x;
	return par[x]=fi(par[x]);
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	// freopen("in.in","r",stdin);
	while(cin>>n>>r>>a>>b>>c){
		map<int, int>cnt;
		for(int i=0; i<n; i++){
			par[i]=i;
			si[i]=1;
		}
		for(int rp=0; rp<n; rp++){
			int x,y;
			do{
				srand(r);
				x=rand()%n;
				y=rand()%n;
				r=((r*a)%c+b%c)%c;
			} while(x==y);
			int d=fi(x),e=fi(y);
			if(d!=e){
				par[e]=d;
				si[d]+=si[e];
			}
		}
		for(int i=0; i<n; i++)
			cnt[si[fi(i)]]++;
		int siz=(int)cnt.size();
		for(auto itr:cnt){
			if(itr.second==1)
				cout<<itr.first;
			else if(itr.second>1)
				cout<<itr.second<<"x"<<itr.first;
			if(siz>1)
				cout<<" ";
			else
				cout<<"\n";
			siz--;
		}
	}
}