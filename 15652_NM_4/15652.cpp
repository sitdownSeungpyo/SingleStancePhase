#include <cstdio>

int n, m;
int arr[9];

void dfs(int num, int cnt)
{
  if (cnt == m)
  {
    for (int i = 0; i < m; i++)
      printf("%d ", arr[i]);
    printf("\n");
    return;
  }

  for (int i = num; i <= n; i++)
  {
    arr[cnt] = i;
    dfs(i, cnt + 1);
  }
}

int main()
{
  scanf("%d %d", &n, &m);
  dfs(1, 0);
}
