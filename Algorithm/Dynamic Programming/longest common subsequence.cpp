//Longest Common Subsequence
#include <bits/stdc++.h>	
#define forn(i,a,b) for(int i=a; i<=b; i++)
using namespace std;
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string str1,str2;
	cin>>str1>>str2;
	int a=str1.length(),b=str2.length(),dp[a+1][b+1];
	string ans[a+1][b+1];
	forn(i,0,a) dp[i][0]=0,ans[i][0]="";
	forn(j,0,b) dp[0][j]=0,ans[0][j]="";
	forn(i,1,a){
		forn(j,1,b){
			if(str1[i-1]==str2[j-1]) 
				dp[i][j]=dp[i-1][j-1]+1,ans[i][j]=ans[i-1][j-1]+str1[i-1];
			else {
				if(dp[i-1][j]>dp[i][j-1]) 
					dp[i][j]=dp[i-1][j], ans[i][j]=ans[i-1][j];
				else 
					dp[i][j]=dp[i][j-1], ans[i][j]=ans[i][j-1];
			}
		}
	}
	cout<<ans[a][b]<<" "<<dp[a][b]<<"\n";
}
