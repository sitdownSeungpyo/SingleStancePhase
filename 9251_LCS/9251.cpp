#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

char s1[1002], s2[1002];
int dp[1002][1002];

int main()
{
  scanf("%s %s", s1 + 1, s2 + 1);
  int len1 = strlen(s1 + 1);
  int len2 = strlen(s2 + 1);

  for (int i = 1; i <= len1; i++)
  {
    for (int j = 1; j <= len2; j++)
    {
      if (s1[i] == s2[j])
      {
        dp[i][j] = dp[i - 1][j - 1] + 1;
      }
      else
      {
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
    }
  }

  printf("%d", dp[len1][len2]);
}
