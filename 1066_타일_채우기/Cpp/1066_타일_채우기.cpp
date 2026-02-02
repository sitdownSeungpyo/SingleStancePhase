#include <cstdio>

int main() {
  int n;
  scanf("%d", &n);

  if (n % 2 == 1) {
    printf("0\n");
    return 0;
  }

  int dp[1005] = {0};
  dp[0] = 1;
  dp[2] = 3;

  for (int i = 4; i <= n; i += 2) {
    dp[i] = 4 * dp[i - 2] - dp[i - 4];
  }

  printf("%d\n", dp[n]);

  return 0;
}
