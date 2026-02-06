#include <cstdio>

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    int sum = i;
    int temp = i;
    while (temp > 0)
    {
      sum += temp % 10;
      temp /= 10;
    }
    if (sum == n)
    {
      printf("%d", i);
      return 0;
    }
  }

  printf("0");
}
