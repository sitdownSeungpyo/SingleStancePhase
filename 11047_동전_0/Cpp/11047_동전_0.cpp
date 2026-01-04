#include <cstdio>

int main()
{
    int n;
    int k;
    scanf("%d %d", &n, &k);

    int coins[10000];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &coins[i]);
    }

    int count = 0;

    for(int i=n-1; i>=0; i--)
    {
        if(k == 0)
        {
            break;
        }
        count += k / coins[i];
        k %= coins[i];
    }

    printf("%d", count);
}
