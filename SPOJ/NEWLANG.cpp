#include <stdio.h>
int main() {
  int t;
  scanf("%d", &t);

  while(t--){
    int n,k;
    scanf("%d %d", &n, &k);

    if(k == 1) {
      for(int i = 1; i <= n; i++) printf("1");
      printf(" ");
      for(int i = 1; i <= n; i++) printf("9");
      puts("");
      continue;
    }

    printf("1");
    for(int i = 1; i <= n-k+1; i++) printf("0");
    for(int i = 2; i <= k-1; i++) printf("%d", i);

    printf(" ");

    for(int i = 0; i < n-k+1; i++) printf("9");
    for(int i = 8; i >= 10-k; i--) printf("%d", i);

    puts("");
  }
  return 0;
}

