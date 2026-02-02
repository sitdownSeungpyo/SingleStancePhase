#include <cstdio>

#include <algorithm>
#include <cstdio>

int main()
{
  int n, m;
  scanf("%d %d", &n, &m);

  char board[50][51];
  for (int i = 0; i < n; i++)
  {
    scanf("%s", board[i]);
  }

  int min_count = 64;

  for (int i = 0; i <= n - 8; i++)
  {
    for (int j = 0; j <= m - 8; j++)
    {
      int c1 = 0;
      int c2 = 0;

      for (int r = 0; r < 8; r++)
      {
        for (int c = 0; c < 8; c++)
        {
          char expected1 = ((r + c) % 2 == 0) ? 'W' : 'B';
          char expected2 = ((r + c) % 2 == 0) ? 'B' : 'W';

          if (board[i + r][j + c] != expected1) c1++;
          if (board[i + r][j + c] != expected2) c2++;
        }
      }

      if (c1 < min_count) min_count = c1;
      if (c2 < min_count) min_count = c2;
    }
  }

  printf("%d\n", min_count);

  return 0;
}
