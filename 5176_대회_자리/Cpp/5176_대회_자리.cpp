#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int p;
        int m;

        scanf("%d %d", &p, &m);

        int* used = new int[m + 1];
        for(int j=0; j<=m; j++)
        {
            used[j] = 0;
        }

        int reject = 0;

        for(int j=0; j<p; j++)
        {
            int seat;
            scanf("%d", &seat);

            if(used[seat] == 0)
            {
                used[seat] = 1;
            }
            else
            {
                reject++;
            }
        }

        printf("%d\n", reject);
    }
}
