#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    if(n < 4)
    {
        printf("0");
    }
    else
    {
        int result = n * (n - 1) * (n - 2) * (n - 3) / 24;
        printf("%d", result);
    }
}
