#include <cstdio>

int a(int n)
{
    if(n < 100) return 1;

    int p[4];
    int len = 0;
    int t = n;

    while(t > 0)
    {
        p[len++] = t % 10;
        t /= 10;
    }

    int diff = p[1] - p[0];
    for(int i=2; i<len; i++)
    {
        if(p[i] - p[i-1] != diff)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int count = 0;
    for(int i=1; i<=n; i++)
    {
        if(a(i))
        {
            count++;
        }
    }

    printf("%d\n", count);
}
