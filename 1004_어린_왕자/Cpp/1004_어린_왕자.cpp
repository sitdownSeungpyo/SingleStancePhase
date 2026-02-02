#include <cstdio>

int main()
{
  int tc;
  scanf("%d", &tc);

  for (int t = 0; t < tc; t++)
  {
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int n;
    scanf("%d", &n);

    int count = 0;

    for (int i = 0; i < n; i++)
    {
      int cx, cy, r;
      scanf("%d %d %d", &cx, &cy, &r);

      int d1 = (int)(x1 - cx) * (x1 - cx) + (int)(y1 - cy) * (y1 - cy);
      int d2 = (int)(x2 - cx) * (x2 - cx) + (int)(y2 - cy) * (y2 - cy);
      int r2 = (int)r * r;

      int in1 = (d1 < r2) ? 1 : 0;
      int in2 = (d2 < r2) ? 1 : 0;

      if (in1 != in2)
      {
        count++;
      }
    }
    printf("%d\n", count);
  }
}
