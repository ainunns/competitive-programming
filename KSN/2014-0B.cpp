#include <iostream>
#include <map>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string s;
	cin>>s;
	map<int, int>stupa;
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int a;
		cin>>a;
		if(stupa[a]+1<=a)
			stupa[a]++;
		else {
			puts("-1");
			return 0;
		}
	}
	long long ans=0;
	for(auto [x,y]:stupa){
		ans+=x;
	}
	cout<<ans<<"\n";
}