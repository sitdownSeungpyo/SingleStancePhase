#include <cstdio>
#include <algorithm>

using namespace std;

int arr[100001];

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
    printf("%d\n", binary_search(arr, arr + n, x) ? 1 : 0);
  }
}
