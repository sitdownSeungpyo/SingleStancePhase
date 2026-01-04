#include <cstdio>

int main()
{
    int a, b;
    int sum = 0;
    int n = 0;

    scanf("%d %d", &a, &b);

    for(int i=1; n<b; i++)
    {
        for(int j=0; j<i && n<b; j++)
        {
            n++;
            if(n>=a && n<=b)
            {
                sum += i;
            }
        }
    }

    printf("%d", sum);
}
