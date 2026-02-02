#include <cmath>
#include <cstdio>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);

  char board[10][10];
  for (int i = 0; i < n; i++)
  {
    scanf("%s", board[i]);
  }

  int ans = -1;

  for (int r = 0; r < n; r++)
  {
    for (int c = 0; c < m; c++)
    {
      for (int dr = -n; dr < n; dr++)
      {
        for (int dc = -m; dc < m; dc++)
        {
          if (dr == 0 && dc == 0)
          {
            continue;
          }

          int nr = r;
          int nc = c;
          int num = 0;

          while (nr >= 0 && nr < n && nc >= 0 && nc < m)
          {
            num = num * 10 + (board[nr][nc] - '0');

            // Check square
            int s = (int)sqrt((double)num);
            if (s * s == num)
            {
              if (num > ans)
                ans = num;
            }

            nr += dr;
            nc += dc;
          }
        }
      }
    }
  }

  printf("%d\n", ans);

  return 0;
}
