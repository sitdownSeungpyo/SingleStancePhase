#include <cstdio>

int main()
{
    int a;
    int money;
    int q, d, n, p;

    scanf("%d", &a);

    for(int i=0; i<a; i++)
    {
        scanf("%d", &money);
        q = money / 25;
        money %= 25;
        d = money / 10;
        money %= 10;
        n = money / 5;
        money %= 5;
        p = money;

        printf("%d %d %d %d\n", q, d, n, p);
    }
}
