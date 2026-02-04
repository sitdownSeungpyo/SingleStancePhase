#include <cmath>
#include <cstdio>


int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int x, y;
    scanf("%d %d", &x, &y);
    int dist = y - x;
    int max = (int)sqrt(dist);

    if (max * max == dist)
    {
      printf("%d\n", 2 * max - 1);
    }
    else if (dist <= max * max + max)
    {
      printf("%d\n", 2 * max);
    }
    else
    {
      printf("%d\n", 2 * max + 1);
    }
  }
}
