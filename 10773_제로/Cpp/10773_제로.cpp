#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int stack[100000];
    int top = 0;
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        int value;
        scanf("%d", &value);

        if(value == 0)
        {
            top--;
            sum -= stack[top];
        }
        else
        {
            stack[top] = value;
            top++;
            sum += value;
        }
    }

    printf("%d", sum);
}
