#include <cstdio>
#include <cstring>

int main()
{
    char n[9];

    for(int i=0; i<3; i++)
    {
        scanf("%s", n);

        int max = 1;
        int c = 1;

        for(int j=1; j<8; j++)
        {
            if(n[j] == n[j-1])
            {
                c++;
            }
            else
            {
                if(c > max)
                {
                    max = c;
                }
                c = 1;
            }
        }

        if(c > max)
        {
            max = c;
        }

        printf("%d\n", max);
    }
}
