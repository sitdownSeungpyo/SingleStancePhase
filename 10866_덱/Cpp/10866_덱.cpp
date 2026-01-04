#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int dq[20000];
    int head = 10000;
    int tail = 9999;

    for(int i=0; i<n; i++)
    {
        char cmd[11];
        scanf("%s", cmd);

        if(cmd[0] == 'p' && cmd[5] == 'f')
        {
            int value;
            scanf("%d", &value);
            head--;
            dq[head] = value;
        }
        else if(cmd[0] == 'p' && cmd[5] == 'b')
        {
            int value;
            scanf("%d", &value);
            tail++;
            dq[tail] = value;
        }
        else if(cmd[0] == 'p' && cmd[4] == 'f')
        {
            if(head > tail)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", dq[head]);
                head++;
            }
        }
        else if(cmd[0] == 'p' && cmd[4] == 'b')
        {
            if(head > tail)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", dq[tail]);
                tail--;
            }
        }
        else if(cmd[0] == 's')
        {
            if(head > tail)
            {
                printf("0\n");
            }
            else
            {
                printf("%d\n", tail - head + 1);
            }
        }
        else if(cmd[0] == 'e')
        {
            printf("%d\n", head > tail ? 1 : 0);
        }
        else if(cmd[0] == 'f')
        {
            if(head > tail)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", dq[head]);
            }
        }
        else if(cmd[0] == 'b')
        {
            if(head > tail)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", dq[tail]);
            }
        }
    }
}
