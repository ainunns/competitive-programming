#include <iostream>
#include <vector>
using namespace std;
const int MX = 1e5 + 5;
int n, vis[MX], in[MX], out[MX], timer = 1;
long long dis[MX];
long double child[MX];
vector<int> v[MX];
void dfs(int node, int d, int parent = 0)
{
  vis[node] = 1;
  dis[node] = d;
  in[node] = timer++;
  long long nyv = 0;
  for (auto c : v[node])
  {
    if (!vis[c])
      nyv++;
  }
  child[node] = child[parent] * max(1ll, nyv);

  for (auto c : v[node])
    if (!vis[c])
      dfs(c, d + 1, node);
  out[node] = timer++;
}
int main()
{
  scanf("%d", &n);
  for (int i = 1; i < n; i++)
  {
    int x, y;
    scanf("%d %d", &x, &y);
    v[x].push_back(y);
    v[y].push_back(x);
  }
  child[0] = 1.0;
  dfs(1, 0);
  double ans = 0.0;
  for (int i = 2; i <= n; i++)
    if (out[i] - in[i] == 1)
    {
      ans += dis[i] * 1.0 / child[i];
    }
  printf("%.15lf\n", ans);
}