//Longest Palindromic Subsequence
#include <bits/stdc++.h>
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int main(){
	string s;
	cin>>s;
	int m=s.length(),dp[m][m];
	forn(i,0,m-1) dp[i][i]=1;
	forn(i,2,m)
		forn(j,0,m-1){
			int k=i+j-1;
			if(k<m)
				if(s[k]==s[j]){
					if(i==2) dp[j][k]=2;
					else dp[j][k]=dp[j+1][k-1]+2;
				} else dp[j][k]=max(dp[j+1][k],dp[j][k-1]);
		}
	cout<<dp[0][m-1]<<"\n";
}
