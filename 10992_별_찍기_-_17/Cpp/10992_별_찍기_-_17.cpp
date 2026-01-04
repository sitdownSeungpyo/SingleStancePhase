#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
        {
            printf(" ");
        }
        if(i == 1)
        {
            printf("*");
        }
        else if(i == n)
        {
            for(int j=1; j<=2*i-1; j++)
            {
                printf("*");
            }
        }
        else
        {
            printf("*");
            for(int j=1; j<=2*i-3; j++)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}
