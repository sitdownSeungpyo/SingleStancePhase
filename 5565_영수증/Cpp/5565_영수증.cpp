#include <cstdio>

int main()
{
    int total;
    int price;
    int sum = 0;

    scanf("%d", &total);

    for(int i=0; i<9; i++)
    {
        scanf("%d", &price);
        sum += price;
    }

    printf("%d", total - sum);
}
