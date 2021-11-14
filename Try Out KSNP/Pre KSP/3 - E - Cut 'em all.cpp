#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
const int MX=1e5;
int n,dp[MX+1],vis[MX+1];
vector<int>v[MX+1],leaf;
void dfs(int node){
	vis[node]=1;
	dp[node]++;
	for(auto c:v[node])
		if(!vis[c]){
			dfs(c);
			dp[node]+=dp[c];
		}
}
int main(){
	scanf("%d",&n);
	for(int i=0; i<n-1; i++){
		int a,b;
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
	}
	if(n%2==1){
		puts("-1");
		return 0;
	}
	dfs(1);
	int ans=0;
	for(int i=1; i<=n; i++)
		ans+=(dp[i]%2==0);
	printf("%d\n", ans-1);
}