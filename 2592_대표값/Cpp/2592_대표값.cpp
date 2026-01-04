#include <cstdio>

int main()
{
    int n[10];
    int count[1001] = {0};
    int sum = 0;

    for(int i=0; i<10; i++)
    {
        scanf("%d", &n[i]);
        sum += n[i];
        count[n[i]]++;
    }

    int max_count = -1;
    int mode = 0;

    for(int i=0; i<=1000; i++)
    {
        if(count[i] > max_count)
        {
            max_count = count[i];
            mode = i;
        }
    }

    printf("%d\n%d", sum / 10, mode);
}
