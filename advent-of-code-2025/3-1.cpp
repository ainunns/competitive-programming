#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int ans = 0;

  while (cin >> s) {
    int len = s.length(), mx = -1;

    for (int i = 0; i < len; i++) {
      for (int j = i + 1; j < len; j++) {
        int num = 10 * (s[i] - '0') + (s[j] - '0');
        mx = max(mx, num);
      }
    }

    ans += mx;
  }

  cout << ans << endl;

  return 0;
}
