#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

char words[20001][51];
int idx[20001];

bool cmp(int a, int b)
{
  int lenA = strlen(words[a]);
  int lenB = strlen(words[b]);
  if (lenA != lenB)
    return lenA < lenB;
  return strcmp(words[a], words[b]) < 0;
}

int main()
{
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    scanf("%s", words[i]);
    idx[i] = i;
  }

  sort(idx, idx + n, cmp);

  char prev[51] = "";
  for (int i = 0; i < n; i++)
  {
    if (strcmp(prev, words[idx[i]]) != 0)
    {
      printf("%s\n", words[idx[i]]);
      strcpy(prev, words[idx[i]]);
    }
  }
}
