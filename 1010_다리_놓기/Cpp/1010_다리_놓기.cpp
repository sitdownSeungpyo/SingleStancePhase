#include <cstdio>

int main() {
  int dp[31][31] = {0};

  for (int i = 0; i <= 30; i++)
  {
    dp[i][0] = 1;
    for (int j = 1; j <= i; j++)
    {
      dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
  }

  int tc;
  scanf("%d", &tc);

  for (int t = 0; t < tc; t++)
  {
    int n, m;
    scanf("%d %d", &n, &m);

    printf("%d\n", dp[m][n]);
  }
}
