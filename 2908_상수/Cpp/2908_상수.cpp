#include <cstdio>

int main()
{
    char a[4];
    char b[4];

    scanf("%s %s", a, b);

    int ra = (a[2] - '0') * 100 + (a[1] - '0') * 10 + (a[0] - '0');
    int rb = (b[2] - '0') * 100 + (b[1] - '0') * 10 + (b[0] - '0');

    if(ra > rb)
    {
        printf("%d", ra);
    }
    else
    {
        printf("%d", rb);
    }
}
