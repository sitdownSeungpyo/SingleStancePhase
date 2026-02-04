#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

int s[20][20];
int n;
int min_diff = 1000000000;
bool team[20];

void dfs(int idx, int count)
{
  if (count == n / 2)
  {
    int start_sum = 0;
    int link_sum = 0;

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (team[i] && team[j])
          start_sum += s[i][j];
        else if (!team[i] && !team[j])
          link_sum += s[i][j];
      }
    }

    int diff = abs(start_sum - link_sum);
    if (diff < min_diff)
      min_diff = diff;
    return;
  }

  for (int i = idx; i < n; i++)
  {
    if (!team[i])
    {
      team[i] = true;
      dfs(i + 1, count + 1);
      team[i] = false;
    }
  }
}

int main()
{
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      scanf("%d", &s[i][j]);
  }

  dfs(0, 0);
  printf("%d", min_diff);
}
