#include <cstdio>
#include <cstring>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        char a[1001];
        char b[1001];

        scanf("%s %s", a, b);

        int len = strlen(a);

        printf("Distances:");
        for(int j=0; j<len; j++)
        {
            int dist = b[j] - a[j];
            if(dist < 0)
            {
                dist += 26;
            }
            printf(" %d", dist);
        }
        printf("\n");
    }
}
