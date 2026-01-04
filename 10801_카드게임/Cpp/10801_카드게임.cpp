#include <cstdio>

int main()
{
    int a[10];
    int b[10];

    for(int i=0; i<10; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i<10; i++)
    {
        scanf("%d", &b[i]);
    }

    int a_score = 0;
    int b_score = 0;

    for(int i=0; i<10; i++)
    {
        if(a[i] > b[i])
        {
            a_score++;
        }
        else if(a[i] < b[i])
        {
            b_score++;
        }
    }

    if(a_score > b_score)
    {
        printf("A");
    }
    else if(a_score < b_score)
    {
        printf("B");
    }
    else
    {
        printf("D");
    }
}
