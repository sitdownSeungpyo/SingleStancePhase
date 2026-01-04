#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int queue[10000];
    int head = 0;
    int tail = 0;
    int size = 0;

    for(int i=0; i<n; i++)
    {
        char cmd[6];
        scanf("%s", cmd);

        if(cmd[0] == 'p' && cmd[1] == 'u')
        {
            int value;
            scanf("%d", &value);
            queue[tail] = value;
            tail++;
            size++;
        }
        else if(cmd[0] == 'p' && cmd[1] == 'o')
        {
            if(size == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", queue[head]);
                head++;
                size--;
            }
        }
        else if(cmd[0] == 's')
        {
            printf("%d\n", size);
        }
        else if(cmd[0] == 'e')
        {
            printf("%d\n", size == 0 ? 1 : 0);
        }
        else if(cmd[0] == 'f')
        {
            if(size == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", queue[head]);
            }
        }
        else if(cmd[0] == 'b')
        {
            if(size == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", queue[tail - 1]);
            }
        }
    }
}
