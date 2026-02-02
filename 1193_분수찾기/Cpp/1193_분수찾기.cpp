#include <cstdio>

int main()
{
    int X;
    scanf("%d", &X);

    int line = 1;
    int sum = 0;

    while(sum + line < X)
    {
        sum += line;
        line++;
    }

    int idx = X - sum;

    int a, b;
    if(line % 2 == 0)
    {
        a = idx;
        b = line - idx + 1;
    }
    else
    {
        a = line - idx + 1;
        b = idx;
    }

    printf("%d/%d\n", a, b);
}
