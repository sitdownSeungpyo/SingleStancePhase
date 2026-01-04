#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int stack[10000];
    int top = -1;

    for(int i=0; i<n; i++)
    {
        char cmd[6];
        scanf("%s", cmd);

        if(cmd[0] == 'p' && cmd[1] == 'u')
        {
            int value;
            scanf("%d", &value);
            top++;
            stack[top] = value;
        }
        else if(cmd[0] == 'p' && cmd[1] == 'o')
        {
            if(top == -1)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", stack[top]);
                top--;
            }
        }
        else if(cmd[0] == 's')
        {
            printf("%d\n", top + 1);
        }
        else if(cmd[0] == 'e')
        {
            if(top == -1)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if(cmd[0] == 't')
        {
            if(top == -1)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", stack[top]);
            }
        }
    }
}
