#include <cstdio>

int main()
{
    int score;
    int sum_a = 0;
    int sum_b = 0;

    for(int i=0; i<4; i++)
    {
        scanf("%d", &score);
        sum_a += score;
    }

    for(int i=0; i<4; i++)
    {
        scanf("%d", &score);
        sum_b += score;
    }

    if(sum_a >= sum_b)
    {
        printf("%d", sum_a);
    }
    else
    {
        printf("%d", sum_b);
    }
}
