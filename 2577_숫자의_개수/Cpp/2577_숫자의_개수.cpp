#include <cstdio>

int main()
{
    int a;
    int b;
    int c;
    int count[10] = {0};

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int value = a * b * c;

    if(value == 0)
    {
        count[0] = 1;
    }
    else
    {
        while(value > 0)
        {
            count[value % 10]++;
            value /= 10;
        }
    }

    for(int i=0; i<10; i++)
    {
        printf("%d\n", count[i]);
    }
}
