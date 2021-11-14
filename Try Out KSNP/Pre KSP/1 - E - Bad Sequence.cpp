#include <iostream>
#include <stack>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int t;
	string s;
	cin>>t>>s;
	stack<char> st;
	for(int i=0; i<t; i++){
		if(st.empty())
			st.push(s[i]);
		else{
			if(st.top()=='(' && s[i]==')')
				st.pop();
			else
				st.push(s[i]);
		}
	}
	if(st.size()==0 || st.size()==2){
		if(st.size()==0)
			cout<<"Yes\n";
		else{
			char fi=st.top();
			st.pop();
			if(fi=='(' && st.top()==')')
				cout<<"Yes\n";
			else cout<<"No\n";
		}
	} else
		cout<<"No\n";
}