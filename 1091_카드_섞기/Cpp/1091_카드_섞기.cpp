#include <cstdio>

int main()
{
  int n;
  scanf("%d", &n);

  int P[48];
  int S[48];
  int card[48];
  int original[48];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &P[i]);
  }

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &S[i]);
  }

  for (int i = 0; i < n; i++)
  {
    card[i] = i;
    original[i] = i;
  }

  int count = 0;

  while (1)
  {
    int ok = 1;
    for (int i = 0; i < n; i++)
    {
      if (P[card[i]] != i % 3)
      {
        ok = 0;
        break;
      }
    }

    if (ok)
    {
      printf("%d\n", count);
      return 0;
    }

    int temp[48];
    for (int i = 0; i < n; i++)
    {
      temp[S[i]] = card[i];
    }
    for (int i = 0; i < n; i++)
    {
      card[i] = temp[i];
    }

    count++;

    int same = 1;
    for (int i = 0; i < n; i++)
    {
      if (card[i] != original[i])
      {
        same = 0;
        break;
      }
    }
    if (same && count > 0)
    {
      printf("-1\n");
      return 0;
    }
  }

  printf("-1\n");
}
