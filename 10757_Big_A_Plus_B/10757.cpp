#include <cstdio>
#include <cstring>

char a[10005], b[10005], res[10005];

void reverse(char *s)
{
  int len = strlen(s);
  for (int i = 0; i < len / 2; i++)
  {
    char temp = s[i];
    s[i] = s[len - 1 - i];
    s[len - 1 - i] = temp;
  }
}

int main()
{
  scanf("%s %s", a, b);
  reverse(a);
  reverse(b);

  int len_a = strlen(a);
  int len_b = strlen(b);
  int len = len_a > len_b ? len_a : len_b;

  int carry = 0;
  for (int i = 0; i < len; i++)
  {
    int sum = carry;
    if (i < len_a)
      sum += a[i] - '0';
    if (i < len_b)
      sum += b[i] - '0';

    res[i] = (sum % 10) + '0';
    carry = sum / 10;
  }
  if (carry)
    res[len++] = carry + '0';
  res[len] = '\0';

  reverse(res);
  printf("%s", res);
}
