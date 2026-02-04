#include <cstdio>
#include <vector>

using namespace std;

int map[9][9];
vector<pair<int, int>> blanks;
bool found = false;

bool check(int y, int x, int val)
{
  for (int i = 0; i < 9; i++)
  {
    if (map[y][i] == val)
      return false;
    if (map[i][x] == val)
      return false;
  }

  int sy = (y / 3) * 3;
  int sx = (x / 3) * 3;
  for (int i = sy; i < sy + 3; i++)
  {
    for (int j = sx; j < sx + 3; j++)
    {
      if (map[i][j] == val)
        return false;
    }
  }
  return true;
}

void dfs(int idx)
{
  if (found)
    return;
  if (idx == blanks.size())
  {
    for (int i = 0; i < 9; i++)
    {
      for (int j = 0; j < 9; j++)
      {
        printf("%d ", map[i][j]);
      }
      printf("\n");
    }
    found = true;
    return;
  }

  int y = blanks[idx].first;
  int x = blanks[idx].second;

  for (int i = 1; i <= 9; i++)
  {
    if (check(y, x, i))
    {
      map[y][x] = i;
      dfs(idx + 1);
      if (found)
        return;
      map[y][x] = 0;
    }
  }
}

int main()
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      scanf("%d", &map[i][j]);
      if (map[i][j] == 0)
        blanks.push_back({i, j});
    }
  }
  dfs(0);
  return 0;
}
