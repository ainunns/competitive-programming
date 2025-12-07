#include <bits/stdc++.h>

using namespace std;

string tambah(string a, string b) {
  string res = "";
  if (a.length() < b.length())
    swap(a, b);
  int r1 = a.length(), r2 = b.length(), mi = min(r1, r2);
  r1--;
  r2--;
  int sis = 0;
  for (int i = 1; i <= mi; i++) {
    int nxt = sis + a[r1--] - '0' + b[r2--] - '0';
    int fi = nxt / 10, se = nxt % 10;
    res = (char)(se + 48) + res;
    sis = fi;
  }
  while (r1 >= 0) {
    int nxt = sis + a[r1--] - '0';
    int fi = nxt / 10, se = nxt % 10;
    res = (char)(se + 48) + res;
    sis = fi;
  }
  if (sis != 0)
    res = (char)(sis + 48) + res;
  return res;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;
  int n, m;
  vector<string> v;
  vector<vector<string>> dp;

  while (cin >> s) {
    v.push_back(s);

    vector<string> tmp(s.size(), "0");
    dp.push_back(tmp);
  }

  n = v.size();
  m = v[0].length();

  int pos = v[0].find('S');
  v[0][pos] = '.';
  dp[0][pos] = "1";

  for (int i = 1; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (v[i][j] == '^') {
        dp[i][j] = "0";
        continue;
      }

      string count = dp[i - 1][j];

      if (j > 0 && v[i][j - 1] == '^')
        count = tambah(count, dp[i - 1][j - 1]);
      if (j < m - 1 && v[i][j + 1] == '^')
        count = tambah(count, dp[i - 1][j + 1]);
      dp[i][j] = count;
    }
  }

  string ans = "0";
  for (int i = 0; i < m; i++)
    ans = tambah(ans, dp[n - 1][i]);

  cout << ans << endl;

  return 0;
}
