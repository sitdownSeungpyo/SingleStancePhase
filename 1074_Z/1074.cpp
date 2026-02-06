#include <cstdio>

int n, r, c;
int cnt = 0;

void solve(int size, int x, int y)
{
  if (size == 1)
  {
    return;
  }

  int half = size / 2;

  if (r < x + half && c < y + half)
  {
    solve(half, x, y);
  }
  else if (r < x + half && c >= y + half)
  {
    cnt += half * half;
    solve(half, x, y + half);
  }
  else if (r >= x + half && c < y + half)
  {
    cnt += half * half * 2;
    solve(half, x + half, y);
  }
  else
  {
    cnt += half * half * 3;
    solve(half, x + half, y + half);
  }
}

int main()
{
  scanf("%d %d %d", &n, &r, &c);
  solve(1 << n, 0, 0);
  printf("%d", cnt);
}
