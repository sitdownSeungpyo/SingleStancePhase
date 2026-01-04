#include <cstdio>

int main()
{
    int n;
    int st, apples;
    int total = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &st, &apples);
        total += apples % st;
    }

    printf("%d", total);
}
