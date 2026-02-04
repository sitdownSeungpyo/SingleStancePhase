#include <cstdio>

bool notPrime[246913];

int main()
{
  int max_n = 123456 * 2;
  notPrime[0] = notPrime[1] = true;
  for (int i = 2; i * i <= max_n; i++)
  {
    if (!notPrime[i])
    {
      for (int j = i * i; j <= max_n; j += i)
        notPrime[j] = true;
    }
  }

  while (true)
  {
    int n;
    scanf("%d", &n);
    if (n == 0)
      break;
    int cnt = 0;
    for (int i = n + 1; i <= 2 * n; i++)
    {
      if (!notPrime[i])
        cnt++;
    }
    printf("%d\n", cnt);
  }
}
