//Repetition Finder
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<b; i++)
#define ford(i,a,b) for(int i=a; i>b; i--)
using namespace std;

int main()
{
	stack<char> q;
	char k;
	string s="",a,l;
	map<string,int> m;
	getline(cin,l);
	int p=l.length();
	forn(i,0,p){
		if(l[i]!=' '){
			q.push(l[i]);
		} else {
			while(!q.empty()){
				s=q.top()+s;
				q.pop();
			}
			m[s]++;
			s="";
		}
	}
	cin>>a;
	if(m[a]!=0){
		cout<<m[a]<<endl;
	}
	return 0;
}

