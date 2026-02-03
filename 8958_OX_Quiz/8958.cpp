#include <cstdio>
#include <cstring>

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    char s[81];
    scanf("%s", s);
    int score = 0;
    int current_streak = 0;
    for (int i = 0; s[i]; i++)
    {
      if (s[i] == 'O')
      {
        current_streak++;
        score += current_streak;
      }
      else
      {
        current_streak = 0;
      }
    }
    printf("%d\n", score);
  }
}
