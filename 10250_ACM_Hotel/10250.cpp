#include <cstdio>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int h, w, n;
    scanf("%d %d %d", &h, &w, &n);
    int floor = n % h;
    if (floor == 0)
      floor = h;
    int room = (n - 1) / h + 1;
    printf("%d%02d\n", floor, room);
  }
}
