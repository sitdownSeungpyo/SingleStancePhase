#include <cstdio>

char board[6561][6562];

void draw(int n, int x, int y)
{
  if (n == 1)
  {
    board[x][y] = '*';
    return;
  }

  int size = n / 3;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (i == 1 && j == 1)
        continue;
      draw(size, x + i * size, y + j * size);
    }
  }
}

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      board[i][j] = ' ';
    board[i][n] = '\0';
  }

  draw(n, 0, 0);

  for (int i = 0; i < n; i++)
    printf("%s\n", board[i]);
}
