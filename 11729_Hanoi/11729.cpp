#include <cmath>
#include <cstdio>

void hanoi(int n, int start, int via, int to)
{
  if (n == 1)
  {
    printf("%d %d\n", start, to);
  }
  else
  {
    hanoi(n - 1, start, to, via);
    printf("%d %d\n", start, to);
    hanoi(n - 1, via, start, to);
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", (1 << n) - 1);
  hanoi(n, 1, 2, 3);
}
