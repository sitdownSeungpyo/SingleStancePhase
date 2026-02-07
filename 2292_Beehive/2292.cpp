#include <cstdio>

int main()
{
  int n;
  scanf("%d", &n);

  int cnt = 1;
  int range = 1;

  while (range < n)
  {
    range += 6 * cnt;
    cnt++;
  }

  printf("%d", cnt);
}
