#include <cstdio>

int stack[100001];
int top = 0;

int main()
{
  int k;
  scanf("%d", &k);

  while (k--)
  {
    int n;
    scanf("%d", &n);
    if (n == 0)
      top--;
    else
      stack[top++] = n;
  }

  int sum = 0;
  for (int i = 0; i < top; i++)
    sum += stack[i];

  printf("%d", sum);
}
