#include <cstdio>

int main()
{
  int t;
  scanf("%d", &t);
  int apt[15][15]; 
  for (int i = 0; i <= 14; i++)
    apt[0][i] = i; 

  for (int i = 1; i <= 14; i++)
  {
    for (int j = 1; j <= 14; j++)
    {
      apt[i][j] = 0;
      for (int k = 1; k <= j; k++)
      {
        apt[i][j] += apt[i - 1][k];
      }
    }
  }

  while (t--)
  {
    int k, n;
    scanf("%d %d", &k, &n);
    printf("%d\n", apt[k][n]);
  }
}
