//Graph Traversal : BFS and DFS
#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
vector<int> adj[1000];
bool visited[1000]={false};
void bfs(int s){
	queue<int> x;
	x.push(s);
	visited[s]=true;
	while(!x.empty()){
		int z=x.front();
		x.pop();
		printf("Visiting curNode %d\n",z);
		for(auto p:adj[z]){
			if(!visited[p]){
				x.push(p);
				visited[p]=true;
			}
		}
	}
}
void dfs(int s){
	if(visited[s]) return;
	visited[s]=true;
	cout<<"Visiting node "<<s<<"\n";
	for(auto x:adj[s]){
		dfs(x);
	}
}
int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	adj[1].push_back(4);
	adj[1].push_back(2);
	adj[2].push_back(1);
	adj[2].push_back(3);
	adj[2].push_back(5);	
	adj[3].push_back(2);
	adj[3].push_back(6);
	adj[4].push_back(1);
	adj[5].push_back(2);
	adj[5].push_back(6);
	
	printf("How I implement BFS from node 1\n");
	bfs(1);
	
	memset(visited,false,sizeof(visited));
	
	printf("\nHow I implement DFS from node 1\n");
	dfs(1);
	return 0;	
}
