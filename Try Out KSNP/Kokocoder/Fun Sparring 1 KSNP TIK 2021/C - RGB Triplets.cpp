#include <iostream>
#include <map>
#define ll long long
using namespace std;
int n;
char s[4004],sc[]={'m','R','G','B'};
map<char, int>ma;
ll ans=0,dp[4004][4];
int main(){
	ma['R']=1;
	ma['G']=2;
	ma['B']=3;
	scanf("%d %s",&n,s);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=3; j++)
			dp[i][ma[sc[j]]]=dp[i-1][ma[sc[j]]];
		dp[i][ma[s[i-1]]]++;
	}
	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			// if(2*j-i<=j || 2*j-i>n)
				// continue;
			if(s[i-1]==s[j-1])
				continue;
			int nxt=6-ma[s[i-1]]-ma[s[j-1]];
			// printf("%d %d %d: %c\n", i,j,2*j-i,s[2*j-i-1]);
			ans+=dp[n][nxt]-dp[j][nxt]-(ma[nxt]!=s[2*j-i-1]);
		}
	}
	printf("%lld\n", ans);
}