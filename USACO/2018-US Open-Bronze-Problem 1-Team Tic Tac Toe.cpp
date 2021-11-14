//http://www.usaco.org/index.php?page=viewproblem2&cpid=831
//Problem Name
#include <bits/stdc++.h>
#define forn(i,a,b) for(int  i=a; i<=b; i++)
#define ford(i,a,b) for(long long i=a; i>=b; i--)
typedef long long ll;
using namespace std;
void solve(){
	freopen("tttt.in","r",stdin);
	freopen("tttt.out","w",stdout);
	char grid[4][4];
	forn(i,1,3)
		forn(j,1,3) cin>>grid[i][j];
	//if single:
	set<string> ss;
	forn(i,1,3){
		if(grid[i][2]==grid[i][1] && grid[i][2]==grid[i][3]) {
			string k="";
			forn(j,1,3) k+=grid[i][j];
			sort(k.begin(),k.end());
			if(ss.count(k)==0) ss.insert(k);
		} 
		if(grid[2][i]==grid[1][i] && grid[1][i]==grid[3][i]) {
			string k="";
			forn(j,1,3) k+=grid[j][i];
			sort(k.begin(),k.end());
			if(ss.count(k)==0) ss.insert(k);
		} 
		if(grid[2][2]==grid[1][1] && grid[1][1]==grid[3][3]) {
			string k="";
			forn(j,1,3) k+=grid[j][j];
			sort(k.begin(),k.end());
			if(ss.count(k)==0) ss.insert(k);
		}
		if(grid[2][2]==grid[1][3] && grid[2][2]==grid[3][1]) {
			string k="";
			forn(j,1,3) k+=grid[j][4-j];
			sort(k.begin(),k.end());
			if(ss.count(k)==0) ss.insert(k);
		}
	}
	//IF DOUBLE:
	set<string> dd;
	forn(i,1,3){
		map<char,int> ma;
		forn(j,1,3) ma[grid[i][j]]++;
		if(ma.size()==2) {
			string k="";
			forn(j,1,3) k+=grid[i][j];
			sort(k.begin(),k.end());
			k.erase(unique(k.begin(),k.end()),k.end());
			if(dd.count(k)==0) dd.insert(k);
		}
		ma.clear();
		forn(j,1,3) ma[grid[j][i]]++;
		if(ma.size()==2) {
			string k="";
			forn(j,1,3) k+=grid[j][i];
			sort(k.begin(),k.end());
			k.erase(unique(k.begin(),k.end()),k.end());
			if(dd.count(k)==0) dd.insert(k);
		}
		ma.clear();
		forn(j,1,3) ma[grid[j][j]]++;
		if(ma.size()==2) {
			string k="";
			forn(j,1,3) k+=grid[j][j];
			sort(k.begin(),k.end());
			k.erase(unique(k.begin(),k.end()),k.end());
			if(dd.count(k)==0) dd.insert(k);
		}
		ma.clear();
		forn(j,1,3) ma[grid[j][4-j]]++;
		if(ma.size()==2) {
			string k="";
			forn(j,1,3) k+=grid[j][4-j];
			sort(k.begin(),k.end());
			k.erase(unique(k.begin(),k.end()),k.end());
			if(dd.count(k)==0) dd.insert(k);
		}
	}
	cout<<ss.size()<<endl<<dd.size()<<endl;
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t=1;
//	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}
