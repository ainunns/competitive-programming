#include <bits/stdc++.h>
using namespace std;

int main() {
  char k[1000];
  int dial = 50, ans = 0;

  while (scanf("%s", k) != EOF) {
    char c;
    int x;
    sscanf(k, "%c%d", &c, &x);

    if (c == 'L')
      dial = (dial - x % 100 + 100) % 100;
    else if (c == 'R')
      dial = (dial + x % 100) % 100;

    ans += (dial == 0);
  }

  printf("%d\n", ans);
  return 0;
}
