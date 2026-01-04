#include <cstdio>
#include <cstring>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        char number[101];
        int used[10] = {0};

        scanf("%s", number);

        int len = strlen(number);

        for(int j=0; j<len; j++)
        {
            used[number[j] - '0'] = 1;
        }

        int count = 0;
        for(int j=0; j<10; j++)
        {
            if(used[j])
            {
                count++;
            }
        }

        printf("%d\n", count);
    }
}
