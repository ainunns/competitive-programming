#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  long long ans = 0;

  while (cin >> s) {
    int len = s.length(), start = 0;
    long long mx = 0, mul = 1;

    for (int i = 12; i > 0; i--) {
      int end = len - i + 1;

      int max_digit = (int)(s[start] - '0');
      int max_pos = start;

      for (int j = start; j < end; j++) {
        int num = (int)(s[j] - '0');
        if (num > max_digit) {
          max_digit = num;
          max_pos = j;
        }
      }

      mx = 10 * mx + max_digit;
      start = max_pos + 1;
    }

    ans += mx;
  }

  cout << ans << endl;

  return 0;
}
