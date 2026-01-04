#include <cstdio>

int main()
{
    int t;
    int n;
    int index;
    int first;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        index = 0;
        first = 1;

        while(n > 0)
        {
            if(n % 2 == 1)
            {
                if(first == 0)
                {
                    printf(" ");
                }
                printf("%d", index);
                first = 0;
            }
            n /= 2;
            index++;
        }
        printf("\n");
    }
}
