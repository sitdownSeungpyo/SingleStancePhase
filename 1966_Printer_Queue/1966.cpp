#include <cstdio>

struct Doc {
  int id;
  int priority;
};

int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, m;
    scanf("%d %d", &n, &m);

    Doc q[10000];
    int front = 0;
    int rear = 0;

    for (int i = 0; i < n; i++)
    {
      int p;
      scanf("%d", &p);
      q[rear++] = {i, p};
    }

    int count = 0;
    while (front < rear)
    {
      int max_p = -1;
      for (int i = front; i < rear; i++)
      {
        if (q[i].priority > max_p)
          max_p = q[i].priority;
      }

      if (q[front].priority == max_p)
      {
        count++;
        if (q[front].id == m)
        {
          printf("%d\n", count);
          break;
        }
        front++;
      }
      else
      {
        q[rear++] = q[front++];
      }
    }
  }
}
