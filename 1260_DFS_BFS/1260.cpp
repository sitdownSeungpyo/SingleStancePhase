#include <cstdio>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int n, m, v;
vector<int> graph[1001];
bool visited[1001];

void dfs(int node)
{
  visited[node] = true;
  printf("%d ", node);
  for (int i = 0; i < graph[node].size(); i++)
  {
    int next = graph[node][i];
    if (!visited[next])
      dfs(next);
  }
}

void bfs(int start)
{
  queue<int> q;
  q.push(start);
  visited[start] = true;

  while (!q.empty())
  {
    int node = q.front();
    q.pop();
    printf("%d ", node);

    for (int i = 0; i < graph[node].size(); i++)
    {
      int next = graph[node][i];
      if (!visited[next])
      {
        visited[next] = true;
        q.push(next);
      }
    }
  }
}

int main()
{
  scanf("%d %d %d", &n, &m, &v);

  for (int i = 0; i < m; i++)
  {
    int a, b;
    scanf("%d %d", &a, &b);
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  for (int i = 1; i <= n; i++)
    sort(graph[i].begin(), graph[i].end());

  dfs(v);
  printf("\n");

  for (int i = 1; i <= n; i++)
    visited[i] = false;

  bfs(v);
}
