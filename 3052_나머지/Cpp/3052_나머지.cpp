#include <cstdio>

int main()
{
    int used[42] = {0};
    int value;

    for(int i=0; i<10; i++)
    {
        scanf("%d", &value);
        used[value % 42] = 1;
    }

    int count = 0;

    for(int i=0; i<42; i++)
    {
        if(used[i])
        {
            count++;
        }
    }

    printf("%d", count);
}
