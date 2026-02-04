#include <algorithm>
#include <cstdio>


using namespace std;

int wine[10001];
int dp[10001];

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    scanf("%d", &wine[i]);

  dp[1] = wine[1];
  if (n > 1)
    dp[2] = wine[1] + wine[2];

  for (int i = 3; i <= n; i++)
  {
    dp[i] = max(dp[i - 1],
                max(dp[i - 2] + wine[i], dp[i - 3] + wine[i - 1] + wine[i]));
  }

  printf("%d", dp[n]);
}
