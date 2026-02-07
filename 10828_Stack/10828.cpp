#include <cstdio>
#include <cstring>

int stack[10001];
int top = 0;

int main()
{
  int n;
  scanf("%d", &n);

  char cmd[10];
  while (n--)
  {
    scanf("%s", cmd);
    if (strcmp(cmd, "push") == 0)
    {
      int x;
      scanf("%d", &x);
      stack[top++] = x;
    }
    else if (strcmp(cmd, "pop") == 0)
    {
      if (top == 0)
        printf("-1\n");
      else
        printf("%d\n", stack[--top]);
    }
    else if (strcmp(cmd, "size") == 0)
    {
      printf("%d\n", top);
    }
    else if (strcmp(cmd, "empty") == 0)
    {
      printf("%d\n", top == 0 ? 1 : 0);
    }
    else if (strcmp(cmd, "top") == 0)
    {
      if (top == 0)
        printf("-1\n");
      else
        printf("%d\n", stack[top - 1]);
    }
  }
}
