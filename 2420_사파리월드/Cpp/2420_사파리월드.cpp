#include <cstdio>

int main()
{
    long long n, m;
    long long result;

    scanf("%lld %lld", &n, &m);

    if(n>m)
    {
        result = n-m;
    }
    else
    {
        result = m-n;
    }

    printf("%lld", result);

}