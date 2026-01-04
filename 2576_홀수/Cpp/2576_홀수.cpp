#include <cstdio>

int main()
{
    int value;
    int sum = 0;
    int min = 100;
    int none = 0;

    for(int i=0; i<7; i++)
    {
        scanf("%d", &value);
        if(value % 2 == 1)
        {
            sum += value;
            if(value < min)
            {
                min = value;
            }
            none = 1;
        }
    }

    if(none == 0)
    {
        printf("-1");
    }
    else
    {
        printf("%d\n%d", sum, min);
    }
}
