#include <cstdio>
#include <cstring>

int main()
{
    int n;
    int m;
    scanf("%d %d", &n, &m);

    char s[32];
    sprintf(s, "%d", n);

    int len = strlen(s);
    int repeat = n;
    int max_repeat = m / len + 1;

    if(repeat > max_repeat)
    {
        repeat = max_repeat;
    }

    int printed = 0;

    for(int i=0; i<repeat && printed < m; i++)
    {
        for(int j=0; j<len && printed < m; j++)
        {
            putchar(s[j]);
            printed++;
        }
    }
}
