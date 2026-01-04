#include <cstdio>

int main()
{
    int n;
    long long result = 1;

    scanf("%d", &n);

    for(int i=2; i<=n; i++)
    {
        result *= i;
    }

    printf("%lld", result);
}
