#include <cstdio>

int main()
{
  int n;
  scanf("%d", &n);
  int ans = -1;

  for (int i = n / 5; i >= 0; i--)
  {
    int rem = n - (i * 5);
    if (rem % 3 == 0)
    {
      ans = i + (rem / 3);
      break;
    }
  }
  printf("%d", ans);
  return 0;
}
