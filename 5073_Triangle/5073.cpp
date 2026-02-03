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

    if (max >= a + b + c - max)
    {
      printf("Invalid\n");
    }
    else
    {
      if (a == b && b == c)
        printf("Equilateral\n");
      else if (a == b || b == c || c == a)
        printf("Isosceles\n");
      else
        printf("Scalene\n");
    }
  }
}
