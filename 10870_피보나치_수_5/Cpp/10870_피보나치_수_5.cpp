#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    if(n == 0)
    {
        printf("0");
    }
    else
    {
        int a = 0;
        int b = 1;

        for(int i=1; i<n; i++)
        {
            int temp = a + b;
            a = b;
            b = temp;
        }

        printf("%d", b);
    }
}
