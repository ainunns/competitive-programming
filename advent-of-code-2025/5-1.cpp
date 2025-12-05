#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
  char s[1000];
  vector<pair<LL, LL>> fresh;

  while (fgets(s, sizeof(s), stdin) != NULL) {
    if (s[0] == '\n')
      break;

    LL a, b;

    sscanf(s, "%lld-%lld", &a, &b);
    fresh.push_back({a, b});
  }

  LL x, ans = 0;
  while (scanf("%lld", &x) != EOF) {
    for (auto [a, b] : fresh) {
      if (a <= x && x <= b) {
        ans++;
        break;
      }
    }
  }

  printf("%lld\n", ans);

  return 0;
}
