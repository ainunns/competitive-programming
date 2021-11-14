//Longest Palindromic Substring
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int main(){
	string s;
	cin>>s;
	int k=s.length(),dp[k+1][k+1]={0},l=1,st,f;
	forn(i,0,k) dp[0][i]=1;
	forn(i,1,k) dp[1][i]=1,st=i-1,f=i-1;
	forn(i,2,k)
		forn(j,0,k-i){
			int a=i+j-1;
			if(s[j]==s[a]){
				dp[i][a]=dp[i-2][a-1];
				if(dp[i][a]==1) 
//					l=max(l,i);
					if(l<i){
						l=i;
						st=j;
						f=a;
					}
			}
		}
//	cout<<l<<"\n";
	for(int i=st; i<=f; i++) cout<<s[i];
	cout<<"\n";
}
