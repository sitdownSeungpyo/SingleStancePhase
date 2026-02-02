#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

int n = 5;
vector<pair<int, int>> pieces;
int k;
int min_ans = INT_MAX;

void check_connectivity(vector<int> &selected, int &connected_count)
{
  if (selected.empty())
  {
    connected_count = 0;
    return;
  }

  int visited[5] = {0};
  vector<int> q;
  q.push_back(0);
  visited[0] = 1;
  connected_count = 1;

  int head = 0;
  while (head < (int)q.size())
  {
    int curr_idx = q[head++];
    int r = selected[curr_idx] / n;
    int c = selected[curr_idx] % n;

    int dr[] = {0, 0, 1, -1};
    int dc[] = {1, -1, 0, 0};

    for (int d = 0; d < 4; d++)
    {
      int nr = r + dr[d];
      int nc = c + dc[d];

      if (nr >= 0 && nr < n && nc >= 0 && nc < n)
      {
        int next_val = nr * n + nc;
        for (int i = 0; i < k; i++)
        {
          if (!visited[i] && selected[i] == next_val)
          {
            visited[i] = 1;
            connected_count++;
            q.push_back(i);
          }
        }
      }
    }
  }
}

void solve(int idx, int cnt, vector<int> &current_sel)
{
  if (cnt == k)
  {
    int connected_cnt = 0;
    check_connectivity(current_sel, connected_cnt);

    if (connected_cnt == k)
    {
      vector<int> p(k);
      for (int i = 0; i < k; i++)
        p[i] = i;

      int current_min_move = INT_MAX;

      do
      {
        int move_sum = 0;
        for (int i = 0; i < k; i++)
        {
          int r1 = pieces[i].first;
          int c1 = pieces[i].second;
          int r2 = current_sel[p[i]] / n;
          int c2 = current_sel[p[i]] % n;
          move_sum += abs(r1 - r2) + abs(c1 - c2);
        }
        if (move_sum < current_min_move)
          current_min_move = move_sum;
      } while (next_permutation(p.begin(), p.end()));

      if (current_min_move < min_ans)
        min_ans = current_min_move;
    }
    return;
  }

  if (idx >= 25)
    return;

  current_sel.push_back(idx);
  solve(idx + 1, cnt + 1, current_sel);
  current_sel.pop_back();
  solve(idx + 1, cnt, current_sel);
}

int main()
{
  char line[6];
  pieces.clear();

  for (int i = 0; i < 5; i++)
  {
    scanf("%s", line);
    for (int j = 0; j < 5; j++)
    {
      if (line[j] == '*')
      {
        pieces.push_back({i, j});
      }
    }
  }

  k = pieces.size();
  if (k == 0)
  {
    printf("0\n");
    return 0;
  }

  vector<int> current_sel;
  solve(0, 0, current_sel);

  printf("%d\n", min_ans);

  return 0;
}
