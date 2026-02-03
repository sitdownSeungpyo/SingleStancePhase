#include <cstdio>

bool notSelf[10001];

int d(int n)
{
  int sum = n;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  for (int i = 1; i <= 10000; i++)
  {
    int res = d(i);
    if (res <= 10000)
      notSelf[res] = true;
  }

  for (int i = 1; i <= 10000; i++)
  {
    if (!notSelf[i])
      printf("%d\n", i);
  }
}
