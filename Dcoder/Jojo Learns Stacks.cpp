#include <bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;
int main(){
	string s,ans="";
	getline(cin,s);
	stack<char>q;
	int k=s.length();
	for(int i=0; i<k; i++){
		if(s[i]!=' ' && s[i]!=')' && s[i]!='('){
			q.push(s[i]);
			if(q.top()=='1' || q.top()=='2' || q.top()=='3' || q.top()=='4' || q.top()=='5' || q.top()=='6' || q.top()=='7' || q.top()=='8' || q.top()=='9' || q.top()=='0'){
				ans=ans+q.top();
				q.pop();
			}
		} else if(s[i]==')'){
			while(!q.empty()){
				ans=ans+q.top();
				q.pop();
			}
		}
	}
	while(!q.empty()){
		ans=ans+q.top();
		q.pop();
	}
	int l=ans.length();
	for(int i=0; i<l-1; i++){
		cout<<ans[i]<<" ";
	}
	cout<<ans[l-1]<<endl;
	return 0;
}
