#include <bits/stdc++.h>

using namespace std;

int ans, n, m;
vector<string> v;

bool check(int x, int y) { return 0 <= x && x < n && 0 <= y && y < m; }

void splitter(int x, int y) {
  if (!check(x, y))
    return;

  char cur = v[x][y];

  if (cur == 'x')
    return;

  v[x][y] = 'x';

  if (cur == '^') {
    ans++;
    splitter(x + 1, y - 1);
    splitter(x + 1, y + 1);

    return;
  }

  splitter(x + 1, y);
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  string s;

  while (cin >> s) {
    v.push_back(s);
  }

  n = v.size();
  m = v[0].length();
  ans = 0;

  int pos = v[0].find('S');
  v[0][pos] = '.';
  splitter(0, pos);

  cout << ans << endl;

  return 0;
}
