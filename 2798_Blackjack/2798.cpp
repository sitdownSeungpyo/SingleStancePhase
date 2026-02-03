#include <cstdio>

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);
  int cards[100];
  for (int i = 0; i < n; i++)
    scanf("%d", &cards[i]);

  int max_sum = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        int sum = cards[i] + cards[j] + cards[k];
        if (sum <= m && sum > max_sum)
        {
          max_sum = sum;
        }
      }
    }
  }
  printf("%d", max_sum);
}
