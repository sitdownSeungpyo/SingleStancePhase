#include <cstdio>

bool isPrime(int n)
{
  if (n < 2)
    return false;
  for (int i = 2; i * i <= n; i++)
  {
    if (n % i == 0)
      return false;
  }
  return true;
}

int main()
{
  int n;
  scanf("%d", &n);

  int cnt = 0;
  while (n--)
  {
    int x;
    scanf("%d", &x);
    if (isPrime(x))
      cnt++;
  }

  printf("%d", cnt);
}
