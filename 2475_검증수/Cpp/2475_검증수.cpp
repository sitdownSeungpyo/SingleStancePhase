#include <cstdio>

int main()
{
    int value;
    int sum = 0;

    for(int i=0; i<5; i++)
    {
        scanf("%d", &value);
        sum += value*value;
    }

    printf("%d", sum%10);
}
