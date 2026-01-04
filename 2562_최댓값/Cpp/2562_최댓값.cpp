#include <cstdio>

int main()
{
    int value;
    int max = 0;
    int index = 0;

    for(int i=1; i<=9; i++)
    {
        scanf("%d", &value);
        if(value > max)
        {
            max = value;
            index = i;
        }
    }

    printf("%d\n%d", max, index);
}
