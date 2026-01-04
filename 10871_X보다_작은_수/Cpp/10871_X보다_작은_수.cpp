#include <cstdio>

int main()
{
    int n, x;

    scanf("%d %d", &n, &x);

    for(int i=0; i<n; i++)
    {
        int value;
        scanf("%d", &value);
        if(value < x)
        {
            printf("%d ", value);
        }
    }
}
