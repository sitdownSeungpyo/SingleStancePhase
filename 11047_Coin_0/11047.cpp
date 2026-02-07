#include <cstdio>

int coin[11];

int main()
{
  int n, k;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++)
    scanf("%d", &coin[i]);

  int cnt = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    cnt += k / coin[i];
    k %= coin[i];
  }

  printf("%d", cnt);
}
