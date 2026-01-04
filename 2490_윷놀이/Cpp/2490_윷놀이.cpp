#include <cstdio>

int main()
{
    int a, b, c, d;
    int zero;

    for(int i=0; i<3; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        zero = 0;

        if(a == 0)
        {
            zero++;
        }
        if(b == 0)
        {
            zero++;
        }
        if(c == 0)
        {
            zero++;
        }
        if(d == 0)
        {
            zero++;
        }

        if(zero == 0)
        {
            printf("E\n");
        }
        else if(zero == 1)
        {
            printf("A\n");
        }
        else if(zero == 2)
        {
            printf("B\n");
        }
        else if(zero == 3)
        {
            printf("C\n");
        }
        else
        {
            printf("D\n");
        }
    }
}
