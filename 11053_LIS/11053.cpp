#include <algorithm>
#include <cstdio>


using namespace std;

int arr[1001];
int dp[1001];

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    scanf("%d", &arr[i]);

  int max_len = 0;
  for (int i = 1; i <= n; i++)
  {
    dp[i] = 1;
    for (int j = 1; j < i; j++)
    {
      if (arr[j] < arr[i] && dp[i] < dp[j] + 1)
      {
        dp[i] = dp[j] + 1;
      }
    }
    if (dp[i] > max_len)
      max_len = dp[i];
  }

  printf("%d", max_len);
}
