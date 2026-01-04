#include <cstdio>

int main()
{
    int n;
    int value;
    int score = 0;
    int sum = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &value);
        if(value == 1)
        {
            score++;
            sum += score;
        }
        else
        {
            score = 0;
        }
    }

    printf("%d", sum);
}
