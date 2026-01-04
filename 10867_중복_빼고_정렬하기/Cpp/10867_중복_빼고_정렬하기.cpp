#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int used[20001] = {0};

    for(int i=0; i<n; i++)
    {
        int value;
        scanf("%d", &value);
        used[value + 10000] = 1;
    }

    int first = 1;
    for(int i=0; i<=20000; i++)
    {
        if(used[i])
        {
            if(!first) printf(" ");
            printf("%d", i - 10000);
            first = 0;
        }
    }

}
