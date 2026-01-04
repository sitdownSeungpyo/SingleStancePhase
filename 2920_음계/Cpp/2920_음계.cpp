#include <cstdio>

int main()
{
    int numbers[8];

    for(int i=0; i<8; i++)
    {
        scanf("%d", &numbers[i]);
    }

    int ascending = 1;
    int descending = 1;

    for(int i=1; i<8; i++)
    {
        if(numbers[i] > numbers[i-1])
        {
            descending = 0;
        }
        else if(numbers[i] < numbers[i-1])
        {
            ascending = 0;
        }
    }

    if(ascending)
    {
        printf("ascending");
    }
    else if(descending)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }
}
