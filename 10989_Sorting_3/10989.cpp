#include <cstdio>

int cnt[10001];

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    int x;
    scanf("%d", &x);
    cnt[x]++;
  }

  for (int i = 1; i <= 10000; i++)
  {
    for (int j = 0; j < cnt[i]; j++)
    {
      printf("%d\n", i);
    }
  }
}
