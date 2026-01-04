#include <cstdio>

int main()
{
    int n;
    int value;
    int sum;
    int min;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        sum = 0;
        min = 100;

        for(int j=0; j<7; j++)
        {
            scanf("%d", &value);
            if(value % 2 == 0)
            {
                sum += value;
                if(value < min)
                {
                    min = value;
                }
            }
        }

        printf("%d %d\n", sum, min);
    }
}
