#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  vector<int> v(n);
  vector<int> sorted_v(n);
  for (int i = 0; i < n; i++)
    {
    scanf("%d", &v[i]);
    sorted_v[i] = v[i];
  }

  sort(sorted_v.begin(), sorted_v.end());
  sorted_v.erase(unique(sorted_v.begin(), sorted_v.end()), sorted_v.end());

  for (int i = 0; i < n; i++)
    {
    int pos =
        lower_bound(sorted_v.begin(), sorted_v.end(), v[i]) - sorted_v.begin();
    printf("%d ", pos);
  }
}
