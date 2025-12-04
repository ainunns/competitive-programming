#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<string> v, cpy;
  string s;
  int dir[8][2] = {{-1, 1}, {0, 1},  {1, 1},   {1, 0},
                   {1, -1}, {0, -1}, {-1, -1}, {-1, 0}};

  while (cin >> s) {
    v.push_back(s);
    cpy.push_back(s);
  }

  int n = v.size(), m = v[0].length(), ans = 0, cur = 0;

  do {
    cur = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        int count = 0;

        cpy[i][j] = v[i][j];

        if (v[i][j] == '.')
          continue;

        for (int k = 0; k < 8; k++) {
          int x = i + dir[k][0], y = j + dir[k][1];

          count += (0 <= x && x < n && 0 <= y && y < m && v[i][j] == '@' &&
                    v[x][y] == '@');
        }

        if (count < 4) {
          cpy[i][j] = '.';
          cur++;
        }
      }
    }

    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
        v[i][j] = cpy[i][j];

    ans += cur;
  } while (cur != 0);

  cout << ans << endl;

  return 0;
}
