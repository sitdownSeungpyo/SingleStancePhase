#include <cstdio>
#include <iostream>
#include <map>
#include <string>


using namespace std;

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    map<string, int> m;
    for (int i = 0; i < n; i++)
    {
      char name[21], type[21];
      scanf("%s %s", name, type);
      m[type]++;
    }

    long long ans = 1;
    for (auto const &[key, val] : m)
    {
      ans *= (val + 1);
    }
    printf("%lld\n", ans - 1);
  }
}
