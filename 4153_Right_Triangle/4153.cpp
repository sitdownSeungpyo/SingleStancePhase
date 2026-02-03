#include <cstdio>

int main()
{
  while (true)
  {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a == 0 && b == 0 && c == 0)
      break;

    int max = a;
    if (b > max)
      max = b;
    if (c > max)
      max = c;

    bool right = false;
    if (max == a)
    {
      if (a * a == b * b + c * c)
        right = true;
    }
    else if (max == b)
    {
      if (b * b == a * a + c * c)
        right = true;
    }
    else
    {
      if (c * c == a * a + b * b)
        right = true;
    }

    if (right)
      printf("right\n");
    else
      printf("wrong\n");
  }
}
