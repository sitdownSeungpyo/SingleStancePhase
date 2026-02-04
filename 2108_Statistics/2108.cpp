#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>


using namespace std;

int main()
{
  int n;
  scanf("%d", &n);
  vector<int> v(n);
  double sum = 0;
  int count[8001] = {0};

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &v[i]);
    sum += v[i];
    count[v[i] + 4000]++;
  }

  sort(v.begin(), v.end());

  printf("%d\n", (int)round(sum / n));

  printf("%d\n", v[n / 2]);

  int max_freq = 0;
  for (int i = 0; i <= 8000; i++)
  {
    if (count[i] > max_freq)
      max_freq = count[i];
  }

  int mode_val = 0;
  bool first = true;
  for (int i = 0; i <= 8000; i++)
  {
    if (count[i] == max_freq)
    {
      if (first)
      {
        mode_val = i - 4000;
        first = false;
      }
      else
      {
        mode_val = i - 4000;
        break;
      }
    }
  }
  printf("%d\n", mode_val);

  printf("%d\n", v[n - 1] - v[0]);
}
