#include <cstdio>

int apt[15][15];

int main()
{
  for (int i = 1; i <= 14; i++)
    apt[0][i] = i;

  for (int i = 1; i <= 14; i++)
  {
    for (int j = 1; j <= 14; j++)
    {
      apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
    }
  }

  int t;
  scanf("%d", &t);
  while (t--)
  {
    int k, n;
    scanf("%d %d", &k, &n);
    printf("%d\n", apt[k][n]);
  }
}
