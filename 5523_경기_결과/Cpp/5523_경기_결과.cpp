#include <cstdio>

int main()
{
    int n;
    int a, b;
    int win_a = 0;
    int win_b = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &a, &b);
        if(a > b)
        {
            win_a++;
        }
        else if(b > a)
        {
            win_b++;
        }
    }

    printf("%d %d", win_a, win_b);
}
