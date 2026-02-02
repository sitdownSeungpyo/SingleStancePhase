#include <cstdio>

int main() {
  int tc;
  scanf("%d", &tc);

  for (int t = 0; t < tc; t++) {
    int m, n, k;
    scanf("%d %d %d", &m, &n, &k);

    int field[50][50] = {
        0,
    };
    int visited[50][50] = {
        0,
    };
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};

    for (int i = 0; i < k; i++) {
      int x, y;
      scanf("%d %d", &x, &y);
      field[x][y] = 1;
    }

    int count = 0;

    int stack_x[2502];
    int stack_y[2502];
    int top = -1;

    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (field[i][j] == 1 && visited[i][j] == 0)
        {
          count++;

          top++;
          stack_x[top] = i;
          stack_y[top] = j;
          visited[i][j] = 1;

          while (top != -1)
          {
            int cx = stack_x[top];
            int cy = stack_y[top];
            top--;

            for (int d = 0; d < 4; d++)
            {
              int nx = cx + dx[d];
              int ny = cy + dy[d];

              if (nx >= 0 && nx < m && ny >= 0 && ny < n)
              {
                if (field[nx][ny] == 1 && visited[nx][ny] == 0)
                {
                  visited[nx][ny] = 1;
                  top++;
                  stack_x[top] = nx;
                  stack_y[top] = ny;
                }
              }
            }
          }
        }
      }
    }

    printf("%d\n", count);
  }

}
