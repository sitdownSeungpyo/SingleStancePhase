#include <cstdio>
#include <cstring>

char expr[51];

int main()
{
  scanf("%s", expr);
  int len = strlen(expr);

  int result = 0;
  int num = 0;
  int sign = 1;
  bool minusFound = false;

  for (int i = 0; i <= len; i++)
  {
    if (expr[i] >= '0' && expr[i] <= '9')
    {
      num = num * 10 + (expr[i] - '0');
    }
    else
    {
      if (minusFound)
        result -= num;
      else
        result += num;

      num = 0;

      if (expr[i] == '-')
        minusFound = true;
    }
  }

  printf("%d", result);
}
