#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

char str[11];

int main()
{
  scanf("%s", str);
  int len = strlen(str);
  sort(str, str + len, greater<char>());
  printf("%s", str);
}
