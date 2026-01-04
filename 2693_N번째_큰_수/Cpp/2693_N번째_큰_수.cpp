#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int n[10];

        for(int j=0; j<10; j++)
        {
            scanf("%d", &n[j]);
        }

        for(int a=0; a<10; a++)
        {
            for(int b=a+1; b<10; b++)
            {
                if(n[a] > n[b])
                {
                    int temp = n[a];
                    n[a] = n[b];
                    n[b] = temp;
                }
            }
        }

        printf("%d\n", n[7]);
    }
}
