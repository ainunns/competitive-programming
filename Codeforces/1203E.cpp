#include <iostream>
#include <algorithm>
#include <map>
#include <climits>
using namespace std;
int main()
{
  int n;
  scanf("%d", &n);

  int a[n + 1];
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);

  sort(a + 1, a + 1 + n, greater<int>());
  int mx = a[1] + 2;

  int ans = 0;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j >= -1; j--)
    {
      if (a[i] + j > 0 && a[i] + j < mx)
      {
        mx = a[i] + j;
        ans++;
        break;
      }
    }
  }
  printf("%d\n", ans);

  return 0;
}