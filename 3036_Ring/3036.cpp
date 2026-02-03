#include <cstdio>

int gcd(int a, int b)
{
  while (b != 0)
  {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main()
{
  int n;
  scanf("%d", &n);
  int first;
  scanf("%d", &first);
  for (int i = 1; i < n; i++)
  {
    int other;
    scanf("%d", &other);
    int g = gcd(first, other);
    printf("%d/%d\n", first / g, other / g);
  }
}
