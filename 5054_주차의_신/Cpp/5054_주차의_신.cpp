#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);

        int min = 1000000;
        int max = -1000000;

        for(int j=0; j<n; j++)
        {
            int pos;
            scanf("%d", &pos);

            if(pos < min)
            {
                min = pos;
            }
            if(pos > max)
            {
                max = pos;
            }
        }

        printf("%d\n", (max - min) * 2);
    }
}
