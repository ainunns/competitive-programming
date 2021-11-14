#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("mengawasi_1.in","r",stdin);
	freopen("mengawasi_1.out","w",stdout);
	int r,c;
	cin>>r>>c;
	for(int i=0; i<r; i++){
		string s;
		cin>>s;
		if(s[0]=='.'){
			for(int j=1; j<c; j++)
				if(s[j]=='x')
					s[j-1]='>';
		} else if(s[0]=='x'){
			for(int j=0; j<c-1; j++)
				if(s[j]=='x')
					s[j+1]='<';
		}
		cout<<s<<"\n";
	}
}