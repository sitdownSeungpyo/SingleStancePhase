#include <cstdio>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int minPack = 1001;
    int minOne = 1001;

    for(int i=0; i<m; i++)
    {
        int pack, one;
        scanf("%d %d", &pack, &one);

        if(pack < minPack) minPack = pack;
        if(one < minOne) minOne = one;
    }

    int ans = 0;

    int cost1 = (n / 6 + 1) * minPack;
    int cost2 = (n / 6) * minPack + (n % 6) * minOne;
    int cost3 = n * minOne;

    ans = cost1;
    if(cost2 < ans) ans = cost2;
    if(cost3 < ans) ans = cost3;

    printf("%d\n", ans);

    return 0;
}
