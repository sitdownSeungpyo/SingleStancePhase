#include <cstdio>

int main()
{
    int n, k;
    int count = 0;
    int result = 0;

    scanf("%d %d", &n, &k);

    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            count++;
            if(count == k)
            {
                result = i;
                break;
            }
        }
    }

    if(result != 0)
    {
        printf("%d", result);
    }
    else
    {
        printf("0");
    }
}
