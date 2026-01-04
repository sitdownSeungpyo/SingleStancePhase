#include <cstdio>

int main()
{
    int d;
    int c;
    int count = 0;

    scanf("%d", &d);

    for(int i=0; i<5; i++)
    {
        scanf("%d", &c);
        if(c == d)
        {
            count++;
        }
    }

    printf("%d", count);
}
