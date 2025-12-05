#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
  char s[1000];
  vector<pair<LL, LL>> fresh, range;

  while (fgets(s, sizeof(s), stdin) != NULL) {
    if (s[0] == '\n')
      break;

    LL a, b;

    sscanf(s, "%lld-%lld", &a, &b);
    fresh.push_back({a, b});
  }

  sort(fresh.begin(), fresh.end());

  for (auto [a, b] : fresh) {
    if (range.empty()) {
      range.push_back({a, b});
      continue;
    }

    bool ada = false;
    int len = range.size();
    for (int i = 0; i < len; i++) {
      LL x, y;
      tie(x, y) = range[i];

      if (x <= a && a <= y) {
        ada = true;
        if (y < b)
          range[i].second = b;
        break;
      }
    }

    if (!ada)
      range.push_back({a, b});
  }

  LL ans = 0;
  for (auto [a, b] : range) {
    ans += (b - a + 1);
  }

  printf("%lld\n", ans);

  return 0;
}
