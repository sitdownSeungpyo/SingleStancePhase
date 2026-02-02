#include <cmath>
#include <cstdio>

int main()
{
  int tc;
  scanf("%d", &tc);

  for (int t = 0; t < tc; t++)
  {
    int x1, y1, r1, x2, y2, r2;
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int d2 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    int sum = (r1 + r2) * (r1 + r2);
    int diff = (r1 - r2) * (r1 - r2);

    if (d2 == 0 && r1 == r2) 
    {
      printf("-1\n");
    }
    else if (d2 > sum || d2 < diff)
    {
      printf("0\n");
    }
    else if (d2 == sum || d2 == diff)
    {
      printf("1\n");
    }
    else
    {
      printf("2\n");
    }
  }
}
