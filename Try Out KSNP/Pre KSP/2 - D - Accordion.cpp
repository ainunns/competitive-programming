#include <iostream>
#include <string>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	string s;
	cin>>s;
	int n=s.size();
	int l=-1,r=-1;
	for(int i=0; i<n; i++){
		if(s[i]=='['){
			l=i;
			break;
		}
	}
	if(l==-1){
		cout<<"-1\n";
		return 0;
	}
	int a=-1;
	for(int i=l+1; i<n; i++){
		if(s[i]==':'){
			a=i;
			break;
		}
	}
	if(a==-1){
		cout<<"-1\n";
		return 0;
	}
	for(int i=n-1; i>=0; i--){
		if(s[i]==']'){
			r=i;
			break;
		}
	}
	if(r==-1){
		cout<<"-1\n";
		return 0;
	}
	int b=-1;
	for(int i=r-1; i>=a+1; i--){
		if(s[i]==':'){
			b=i;
			break;
		}
	}
	if(b==-1){
		cout<<"-1\n";
		return 0;
	}
	b--;
	a++;
	int ans=4;
	for(int i=a; i<=b; i++)
		ans+=(s[i]=='|');
	cout<<ans<<"\n";
}