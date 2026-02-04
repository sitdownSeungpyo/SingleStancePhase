#include <algorithm>
#include <cstdio>


using namespace std;

int dp[500][500];

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      scanf("%d", &dp[i][j]);
    }
  }

  for (int i = n - 2; i >= 0; i--)
  {
    for (int j = 0; j <= i; j++)
    {
      dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
    }
  }

  printf("%d", dp[0][0]);
}
