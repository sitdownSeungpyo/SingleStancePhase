#include <cstdio>

int main()
{
    int l, p;
    int people;
    int total;

    scanf("%d %d", &l, &p);
    total = l * p;

    for(int i=0; i<5; i++)
    {
        scanf("%d", &people);
        printf("%d ", people - total);
    }
}
