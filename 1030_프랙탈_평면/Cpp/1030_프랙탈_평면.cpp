#include <cstdio>

int main() {
  int s, n, k, r1, r2, c1, c2;
  scanf("%d %d %d %d %d %d %d", &s, &n, &k, &r1, &r2, &c1, &c2);

  int full_size = 1;
  for (int i = 0; i < s; i++)
  {
    full_size *= n;
  }

  for (int i = r1; i <= r2; i++)
  {
    for (int j = c1; j <= c2; j++)
    {
      int is_black = 0;
      int cur_r = i;
      int cur_c = j;
      int cur_size = full_size;

      for (int d = 0; d < s; d++)
      {
        int block_size = cur_size / n;
        int br = cur_r / block_size;
        int bc = cur_c / block_size;

        int start = (n - k) / 2;
        int end = start + k - 1;

        if (br >= start && br <= end && bc >= start && bc <= end)
        {
          is_black = 1;
          break;
        }

        cur_r %= block_size;
        cur_c %= block_size;
        cur_size /= n;
      }

      printf("%d", is_black);
    }
    printf("\n");
  }

  return 0;
}
