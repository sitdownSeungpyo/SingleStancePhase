#include <cstdio>

int zero[41];
int one[41];

int main()
{
  zero[0] = 1; one[0] = 0;
  zero[1] = 0; one[1] = 1;

  for (int i = 2; i <= 40; i++)
  {
    zero[i] = zero[i - 1] + zero[i - 2];
    one[i] = one[i - 1] + one[i - 2];
  }

  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    printf("%d %d\n", zero[n], one[n]);
  }
}
