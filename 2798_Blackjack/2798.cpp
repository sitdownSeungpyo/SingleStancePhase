#include <cstdio>
#include <algorithm>

using namespace std;

int card[101];

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++)
    scanf("%d", &card[i]);

  int ans = 0;
  for (int i = 0; i < n - 2; i++)
  {
    for (int j = i + 1; j < n - 1; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        int sum = card[i] + card[j] + card[k];
        if (sum <= m)
          ans = max(ans, sum);
      }
    }
  }

  printf("%d", ans);
}
