#include <iostream>
#include <vector>
using namespace std;
const int MX=1e5;
int n;
string s;
void solve(){
	cin>>n>>s;
	vector<int>T,M;
	for(int i=1; i<=n; i++){
		if(s[i-1]=='T')
			T.push_back(i);
		else if(s[i-1]=='M')
			M.push_back(i);
	}
	if(2*M.size()!=T.size()){
		cout<<"NO\n";
		return;
	}
	for(int i=0; i<n/3; i++)
		if(!(T[i]<M[i] && M[i]<T[n/3+i])){
			cout<<"NO\n";
			return;
		}
	cout<<"YES\n";
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}