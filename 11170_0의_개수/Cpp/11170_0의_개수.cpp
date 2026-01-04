#include <cstdio>

int count_zero(int n)
{
    if(n == 0)
    {
        return 1;
    }

    int count = 0;
    while(n > 0)
    {
        if(n % 10 == 0)
        {
            count++;
        }
        n /= 10;
    }

    return count;
}

int main()
{
    int k;
    scanf("%d", &k);

    for(int i=0; i<k; i++)
    {
        int n;
        int m;
        scanf("%d %d", &n, &m);

        int total = 0;
        for(int value=n; value<=m; value++)
        {
            total += count_zero(value);
        }

        printf("%d\n", total);
    }
}
