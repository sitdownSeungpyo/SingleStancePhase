#include <cstdio>

int main()
{
    int t;
    int s;
    int n;
    int q, p;
    int total;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d", &s);
        scanf("%d", &n);
        total = s;

        for(int j=0; j<n; j++)
        {
            scanf("%d %d", &q, &p);
            total += q * p;
        }

        printf("%d\n", total);
    }
}
