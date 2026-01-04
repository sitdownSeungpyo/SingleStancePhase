#include <cstdio>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);

    int g = gcd(a, b);
    int l = a / g * b;

    printf("%d\n%d", g, l);
}
