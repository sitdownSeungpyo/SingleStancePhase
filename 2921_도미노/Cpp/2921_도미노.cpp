#include <cstdio>

int main()
{
    int n;
    int total_sum = 0;
    scanf("%d", &n);

    for (int i=0; i<=n; i++)
    {
        for (int j=i; j<=n; j++)
        {
            total_sum += (i + j);
        }
    }
    printf("%d", total_sum);
}
