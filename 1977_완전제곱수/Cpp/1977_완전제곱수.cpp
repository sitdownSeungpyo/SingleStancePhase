#include <cstdio>

int main()
{
    int m, n;
    int sum = 0;
    int min = 0;

    scanf("%d", &m);
    scanf("%d", &n);

    for(int i=1; i*i<=n; i++)
    {
        int square = i * i;
        if(square >= m)
        {
            sum += square;
            if(min == 0)
            {
                min = square;
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
