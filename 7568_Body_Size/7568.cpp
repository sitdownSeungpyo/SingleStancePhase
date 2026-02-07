#include <cstdio>

int w[51], h[51];

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
    scanf("%d %d", &w[i], &h[i]);

  for (int i = 0; i < n; i++)
  {
    int rank = 1;
    for (int j = 0; j < n; j++)
    {
      if (w[j] > w[i] && h[j] > h[i])
        rank++;
    }
    printf("%d ", rank);
  }
}
