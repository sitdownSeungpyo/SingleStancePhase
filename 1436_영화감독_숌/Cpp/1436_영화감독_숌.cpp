#include <cstdio>

int hastrisix(int n)
{
    while(n >= 666)
    {
        if(n % 1000 == 666)
        {
            return 1;
        }
        n /= 10;
    }
    return 0;
}

int main()
{
    int N;
    scanf("%d", &N);

    int count = 0;
    int num = 665;

    while(count < N)
    {
        num++;
        if(hastrisix(num))
        {
            count++;
        }
    }

    printf("%d\n", num);
}
