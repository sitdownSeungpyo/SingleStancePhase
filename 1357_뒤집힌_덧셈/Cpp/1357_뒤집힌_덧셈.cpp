#include <cstdio>

int reverse(int x)
{
    int result = 0;
    while(x>0)
    {
        int a = x % 10;

        result = (result * 10) + a;

        x = x/10;
    }
    return result;
}

int main()
{
    int x;
    int y;

    scanf("%d %d", &x, &y);

    x = reverse(x);
    y = reverse(y);

    printf("%d", reverse(x+y));

}
