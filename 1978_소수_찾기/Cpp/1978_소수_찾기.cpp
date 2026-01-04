#include <cstdio>

int main()
{
    int n;
    int value;
    int count = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &value);

        if(value < 2)
        {
            continue;
        }

        int ok = 1;
        for(int j=2; j*j<=value; j++)
        {
            if(value % j == 0)
            {
                ok = 0;
                break;
            }
        }

        if(ok == 1)
        {
            count++;
        }
    }

    printf("%d", count);
}
