#include <cstdio>

int main()
{
    int n;
    int outlet;
    int sum = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &outlet);
        sum += outlet;
    }

    printf("%d", sum-(n-1));
}
