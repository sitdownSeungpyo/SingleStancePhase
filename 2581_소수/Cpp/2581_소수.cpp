#include <cstdio>

int is(int n)
{
    if(n < 2)
    {
        return 0;
    }

    for(int i=2; i*i<=n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    int m;
    int n;
    int sum = 0;
    int min = 0;

    scanf("%d", &m);
    scanf("%d", &n);

    for(int i=m; i<=n; i++)
    {
        if(is(i))
        {
            sum += i;
            if(min == 0)
            {
                min = i;
            }
        }
    }

    if(min == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, min);
    }
}
