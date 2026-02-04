#include <algorithm>
#include <cstdio>

using namespace std;

int n;
int a[1001];
int dp_inc[1001];
int dp_dec[1001];

int main()
{
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);

  for (int i = 1; i <= n; i++)
    dp_inc[i] = 1;
    for (int j = 1; j < i; j++)
    {
      if (a[j] < a[i] && dp_inc[i] < dp_inc[j] + 1)
      {
        dp_inc[i] = dp_inc[j] + 1;
      }
    }

  for (int i = n; i >= 1; i--)
  {
    dp_dec[i] = 1;
    for (int j = n; j > i; j--)
    {
      if (a[j] < a[i] && dp_dec[i] < dp_dec[j] + 1)
        dp_dec[i] = dp_dec[j] + 1;
      }
    }

  int max_len = 0;
  for (int i = 1; i <= n; i++)
  {
    if (dp_inc[i] + dp_dec[i] - 1 > max_len)
    {
      max_len = dp_inc[i] + dp_dec[i] - 1;
    }
  }

  printf("%d", max_len);
}
