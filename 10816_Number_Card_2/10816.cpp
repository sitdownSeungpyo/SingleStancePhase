#include <cstdio>
#include <algorithm>

using namespace std;

int arr[500001];

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  sort(arr, arr + n);

  int m;
  scanf("%d", &m);
  while (m--)
  {
    int x;
    scanf("%d", &x);
    printf("%d ", (int)(upper_bound(arr, arr + n, x) - lower_bound(arr, arr + n, x)));
  }
}
