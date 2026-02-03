#include <cstdio>


int main()
{
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int mid;
  if (a >= b && a >= c)
  {
    if (b >= c)
      mid = b;
    else
      mid = c;
  }
  else if (b >= a && b >= c)
  {
    if (a >= c)
      mid = a;
    else
      mid = c;
  }
  else
  {
    if (a >= b)
      mid = a;
    else
      mid = b;
  }
  printf("%d", mid);
}
