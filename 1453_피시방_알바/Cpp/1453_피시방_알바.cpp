#include <cstdio>

int main()
{
    int n;
    int seat;
    int used_s[100] = {0};
    int reject = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &seat);
        if(used_s[seat] == 1)
        {
            reject++;
        }
        else
        {
            used_s[seat] = 1;
        }
    }

    printf("%d", reject);
}
