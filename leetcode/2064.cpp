#include <bits/stdc++.h>
using namespace std;

int minimizedMaximum(int n, vector<int>& quantities) {
  long long l = 1, r = INT_MAX, ans = -1;

  while(l <= r) {
    long long mid = l + (r - l) / 2, cnt = 0;

    for(auto c: quantities) {
      cnt += (c + mid - 1) / mid;
    }

    if(cnt <= n) {
      ans = mid;
      r = mid - 1;
    } else {
      l = mid + 1;
    }
  }

  return ans;
}

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  vector<int> quantities(m);
  for(int i = 0; i < m; i++) {
    scanf("%d", &quantities[i]);
  }

  printf("%d\n", minimizedMaximum(n, quantities));
  return 0;
}
