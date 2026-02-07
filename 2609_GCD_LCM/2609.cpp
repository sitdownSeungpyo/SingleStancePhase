#include <cstdio>

int gcd(int a, int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);

  int g = gcd(a, b);
  int l = a / g * b;

  printf("%d\n%d", g, l);
}
