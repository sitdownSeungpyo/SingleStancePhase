#include <cstdio>

int main()
{
    int n;
    int value;
    int min;
    int max;

    scanf("%d", &n);
    scanf("%d", &value);
    min = value;
    max = value;

    for(int i=1; i<n; i++)
    {
        scanf("%d", &value);
        if(value < min)
        {
            min = value;
        }
        if(value > max)
        {
            max = value;
        }
    }

    printf("%d %d", min, max);
}
