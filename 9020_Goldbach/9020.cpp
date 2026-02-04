#include <cstdio>

bool notPrime[10001];

int main() {
  notPrime[0] = notPrime[1] = true;
  for (int i = 2; i * i <= 10000; i++)
  {
    if (!notPrime[i])
    {
      for (int j = i * i; j <= 10000; j += i)
        notPrime[j] = true;
    }
  }

  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    for (int i = n / 2; i >= 2; i--)
    {
      if (!notPrime[i] && !notPrime[n - i])
      {
        printf("%d %d\n", i, n - i);
        break;
      }
    }
  }
}
