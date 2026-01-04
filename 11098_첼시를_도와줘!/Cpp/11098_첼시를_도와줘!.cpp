#include <cstdio>
#include <cstring>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int k;
        scanf("%d", &k);

        int best_price;
        char best_name[101];

        int price;
        char name[101];

        scanf("%d %s", &best_price, best_name);

        for(int j=1; j<k; j++)
        {
            scanf("%d %s", &price, name);

            if(price > best_price)
            {
                best_price = price;
                strcpy(best_name, name);
            }
        }

        printf("%s\n", best_name);
    }
}
