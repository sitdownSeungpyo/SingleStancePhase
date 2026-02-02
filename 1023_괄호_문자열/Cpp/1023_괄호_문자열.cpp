#include <cstdio>

int main() {
  int dp[51][51] = {0};

  for (int i = 0; i <= 50; i++)
  {
    dp[i][0] = 1;
    for (int j = 1; j <= i; j++)
    {
      dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
    }
  }

  int n, k;
  scanf("%d %d", &n, &k);

  int tot = 1 << n;
  int val = 0;

  if (n % 2 == 0)
  {
    int h = n / 2;
    val = dp[n][h] - dp[n][h + 1];
  }

  int inv = tot - val;

  if (k >= inv)
  {
    printf("-1\n");
    return 0;
  }

  char s[51];
  int op = 0;

  for (int i = 0; i < n; i++)
  {
    int cnt = 0;
    int len = n - i - 1;
    int nop = op + 1;

    if (nop <= len)
    {
      for (int j = nop; j <= len; j++)
      {
        if ((j - nop) % 2 == 0)
        {
          int p = (j - nop) / 2;
          int cat = 0;

          if (j == 0)
          {
            cat = 1;
          }
          else
          {
            cat = dp[j][p] - dp[j][p + 1];
          }

          if (cat < 0)
          {
            cat = 0;
          }
          cnt += dp[len][j] * cat;
        }
      }
    }
    else if (nop == len + 1)
    {
      cnt = 1;
    }

    int inv0 = (1 << len) - cnt;

    if (k < inv0)
    {
      s[i] = '(';
      op++;
    }
    else
    {
      s[i] = ')';
      k -= inv0;
      op--;
    }
  }

  s[n] = '\0';
  printf("%s\n", s);

  return 0;
}
