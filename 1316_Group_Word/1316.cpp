#include <cstdio>
#include <cstring>

char word[101];

int main()
{
  int n;
  scanf("%d", &n);

  int cnt = 0;
  while (n--)
  {
    scanf("%s", word);
    int len = strlen(word);
    bool used[26] = {false};
    bool isGroup = true;

    used[word[0] - 'a'] = true;
    for (int i = 1; i < len; i++)
    {
      if (word[i] != word[i - 1])
      {
        if (used[word[i] - 'a'])
        {
          isGroup = false;
          break;
        }
        used[word[i] - 'a'] = true;
      }
    }

    if (isGroup)
      cnt++;
  }

  printf("%d", cnt);
}
