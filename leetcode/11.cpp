#include <bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define PB push_back
#define EB emplace_back
#define REP(i, begin, end)                                                     \
  for (__typeof(end) i = (begin) - ((begin) > (end));                          \
       i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define TRAV(a, x) for (auto &a : x)
#define ALL(x) x.begin(), x.end()
#define SZ(x) (int)(x).size()

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int maxArea(vi &height) {
  int n = height.size();

  int l = 0, r = n - 1, ans = 0;
  while (l < r) {
    ans = max(ans, min(height[l], height[r]) * (r - l));

    if (height[l] >= height[r])
      r--;
    else
      l++;
  }

  return ans;
}

void solve() {
  int n;
  cin >> n;

  vi height(n);
  for (int i = 0; i < n; i++) {
    cin >> height[i];
  }

  int ans = maxArea(height);
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int tc = 1;
  // cin >> tc;

  while (tc--) {
    solve();
  }

  return 0;
}
