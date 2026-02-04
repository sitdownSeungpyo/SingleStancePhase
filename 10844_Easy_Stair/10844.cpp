#include <cstdio>

int main() {
  int n;
  scanf("%d", &n);
  int dp[101][10];

  for (int i = 1; i <= 9; i++)
    dp[1][i] = 1;
  dp[1][0] = 0;

  for (int i = 2; i <= n; i++)
  {
    for (int j = 0; j <= 9; j++)
    {
      dp[i][j] = 0;
      if (j > 0)
        dp[i][j] += dp[i - 1][j - 1];
      if (j < 9)
        dp[i][j] += dp[i - 1][j + 1];
      dp[i][j] %= 1000000000;
    }
  }

  int sum = 0;
  for (int i = 0; i <= 9; i++)
    sum = (sum + dp[n][i]) % 1000000000;

  printf("%d", sum);  
  return 0;
}
