#include <cstdio>
#include <cstring>

int cnt[26];
char str[1000001];

int main()
{
  scanf("%s", str);
  int len = strlen(str);

  for (int i = 0; i < len; i++)
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      cnt[str[i] - 'a']++;
    else
      cnt[str[i] - 'A']++;
  }

  int maxCnt = 0;
  int maxIdx = 0;
  int dup = 0;

  for (int i = 0; i < 26; i++)
  {
    if (cnt[i] > maxCnt)
    {
      maxCnt = cnt[i];
      maxIdx = i;
      dup = 0;
    }
    else if (cnt[i] == maxCnt)
    {
      dup = 1;
    }
  }

  if (dup)
    printf("?");
  else
    printf("%c", 'A' + maxIdx);
}
