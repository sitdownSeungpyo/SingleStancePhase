#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    if(n == 1)
    {
        printf("1\n");
        return 0;
    }

    int sum = 1;
    int layer = 1;

    while(sum < n)
    {
        sum += 6 * layer;
        layer++;
    }

    printf("%d\n", layer);

    return 0;
}
