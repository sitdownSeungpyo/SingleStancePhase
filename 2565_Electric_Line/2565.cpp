#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d %d", &v[i].first, &v[i].second);
  }

  sort(v.begin(), v.end());

  vector<int> dp(n, 1);
  int max_lis = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      if (v[j].second < v[i].second && dp[i] < dp[j] + 1)
      {
        dp[i] = dp[j] + 1;
      }
    }
    if (dp[i] > max_lis)
      max_lis = dp[i];
  }

  printf("%d", n - max_lis);
}
