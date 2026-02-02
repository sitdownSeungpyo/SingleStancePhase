#include <cstdio>

int main()
{
  int n;
  scanf("%d", &n);

  int deg[100] = {};
  for (int i = 0; i < n; i++)
  {
    int u, v;
    scanf("%d %d", &u, &v);
    if (u >= 0 && u < 100)
    {
      deg[u]++;
    }
    if (v >= 0 && v < 100)
    {
      deg[v]++;
    }
  }

  unsigned long long ans = 1;
  for (int i = 0; i < 100; i++)
  {
    if (deg[i] % 2 != 0)
    {
      ans = 0;
      break;
    }

    unsigned long long c = 1;
    for (int k = deg[i] - 1; k > 0; k -= 2)
    {
      c *= k;
    }
    ans *= c;
  }

  printf("%llu\n", ans);
}
