#include <cstdio>

int main()
{
    int height[9];
    int sum = 0;

    for(int i=0; i<9; i++)
    {
        scanf("%d", &height[i]);
        sum += height[i];
    }

    int target = sum - 100;
    int remove1 = -1;
    int remove2 = -1;

    for(int i=0; i<9; i++)
    {
        for(int j=i+1; j<9; j++)
        {
            if(height[i] + height[j] == target)
            {
                remove1 = i;
                remove2 = j;
                break;
            }
        }
        if(remove1 != -1)
        {
            break;
        }
    }

    for(int i=0; i<9; i++)
    {
        if(i == remove1 || i == remove2)
        {
            continue;
        }
        printf("%d\n", height[i]);
    }
}
