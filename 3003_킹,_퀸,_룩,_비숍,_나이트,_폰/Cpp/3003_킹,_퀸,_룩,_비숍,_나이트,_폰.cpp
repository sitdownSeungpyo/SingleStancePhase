#include <cstdio>

int main()
{
    int need[6] = {1, 1, 2, 2, 2, 8};
    int have;

    for(int i=0; i<6; i++)
    {
        scanf("%d", &have);
        printf("%d ", need[i]-have);
    }
}
