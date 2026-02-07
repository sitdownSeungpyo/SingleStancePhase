#include <cstdio>
#include <algorithm>

using namespace std;

int p[1001];

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &p[i]);

  sort(p, p + n);

  int total = 0;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += p[i];
    total += sum;
  }

  printf("%d", total);
}
