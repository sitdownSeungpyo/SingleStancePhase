#include <cstdio>
#include <cstring>

int deque[20001];
int front = 10000, back = 10001;

int main()
{
  int n;
  scanf("%d", &n);

  char cmd[15];
  while (n--)
  {
    scanf("%s", cmd);
    if (strcmp(cmd, "push_front") == 0)
    {
      int x;
      scanf("%d", &x);
      deque[front--] = x;
    }
    else if (strcmp(cmd, "push_back") == 0)
    {
      int x;
      scanf("%d", &x);
      deque[back++] = x;
    }
    else if (strcmp(cmd, "pop_front") == 0)
    {
      if (front + 1 == back)
        printf("-1\n");
      else
        printf("%d\n", deque[++front]);
    }
    else if (strcmp(cmd, "pop_back") == 0)
    {
      if (front + 1 == back)
        printf("-1\n");
      else
        printf("%d\n", deque[--back]);
    }
    else if (strcmp(cmd, "size") == 0)
    {
      printf("%d\n", back - front - 1);
    }
    else if (strcmp(cmd, "empty") == 0)
    {
      printf("%d\n", front + 1 == back ? 1 : 0);
    }
    else if (strcmp(cmd, "front") == 0)
    {
      if (front + 1 == back)
        printf("-1\n");
      else
        printf("%d\n", deque[front + 1]);
    }
    else if (strcmp(cmd, "back") == 0)
    {
      if (front + 1 == back)
        printf("-1\n");
      else
        printf("%d\n", deque[back - 1]);
    }
  }
}
