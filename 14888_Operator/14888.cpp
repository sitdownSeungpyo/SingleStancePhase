#include <cstdio>
#include <vector>

using namespace std;

int n;
int nums[11];
int operators[4];
int max_val = -1000000001;
int min_val = 1000000001;

void dfs(int idx, int current_val)
{
  if (idx == n)
  {
    if (current_val > max_val)
      max_val = current_val;
    if (current_val < min_val)
      min_val = current_val;
    return;
  }

  for (int i = 0; i < 4; i++)
  {
    if (operators[i] > 0)
    {
      operators[i]--;
      if (i == 0)
        dfs(idx + 1, current_val + nums[idx]);
      else if (i == 1)
        dfs(idx + 1, current_val - nums[idx]);
      else if (i == 2)
        dfs(idx + 1, current_val * nums[idx]);
      else if (i == 3)
        dfs(idx + 1, current_val / nums[idx]);
      operators[i]++;
    }
  }
}

int main()
{
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &nums[i]);
  for (int i = 0; i < 4; i++)
    scanf("%d", &operators[i]);

  dfs(1, nums[0]);

  printf("%d\n%d", max_val, min_val);
}
