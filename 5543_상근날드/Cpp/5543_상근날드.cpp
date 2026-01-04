#include <cstdio>

int main()
{
    int burger[3];
    int drink[2];
    int min_bp;
    int min_dp;

    for(int i=0; i<3; i++)
    {
        scanf("%d", &burger[i]);
    }

    for(int j=0; j<2; j++)
    {
        scanf("%d", &drink[j]);
    }

    min_bp = burger[0];
    for(int n=1; n<3; n++)
    {
        if(burger[n] < min_bp)
        {
            min_bp = burger[n];
        }
    }

    min_dp = drink[0];
    if(drink[1] < min_dp)
    {
        min_dp = drink[1];
    }

    printf("%d", min_bp + min_dp - 50);
}
