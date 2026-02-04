#include <cstdio>
#include <vector>

bool notPrime[1000001];

int main()
{
  int m, n;
  scanf("%d %d", &m, &n);

  notPrime[0] = notPrime[1] = true;
  for (int i = 2; i * i <= n; i++)
  {
    if (!notPrime[i])
    {
      for (int j = i * i; j <= n; j += i)
      {
        notPrime[j] = true;
      }
    }
  }

  for (int i = m; i <= n; i++)
  {
    if (!notPrime[i])
      printf("%d\n", i);
  }
}
