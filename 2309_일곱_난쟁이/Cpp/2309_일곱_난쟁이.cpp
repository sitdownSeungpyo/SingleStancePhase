#include <cstdio>
#include <algorithm>

namespace std
{
}

int main()
{
    int num[9];
    int sum = 0;

    for (int i=0; i<9; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    std::sort(num, num + 9);

    int fake1 = 0;
    int fake2 = 0;

    for(int i=0; i<8; i++)
    {
        for(int j=i+1; j<9; j++)
        {
            if(sum-(num[i]+num[j]) == 100)
            {
                fake1 = i;
                fake2 = j;
                break;
            }
        }
        if(fake1 != 0)
        {
            break;
        }
    }

    for(int i=0; i<9; i++)
    {
        if (i == fake1 || i == fake2) 
        {
            continue;
        }
        printf("%d\n", num[i]);
    }

    return 0;
}