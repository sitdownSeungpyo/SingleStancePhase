#include <cstdio>

int main()
{
    int t;
    int n;
    int value;
    int sum;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        sum = 0;
        for(int j=0; j<n; j++)
        {
            scanf("%d", &value);
            sum += value;
        }
        printf("%d\n", sum);
    }
}
