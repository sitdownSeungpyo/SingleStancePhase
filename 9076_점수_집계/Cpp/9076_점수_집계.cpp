#include <cstdio>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int scores[5];

        for(int j=0; j<5; j++)
        {
            scanf("%d", &scores[j]);
        }

        int min_idx = 0;
        int max_idx = 0;

        for(int j=1; j<5; j++)
        {
            if(scores[j] < scores[min_idx])
            {
                min_idx = j;
            }
            if(scores[j] > scores[max_idx])
            {
                max_idx = j;
            }
        }

        if(min_idx == max_idx)
        {
            max_idx = (min_idx == 0) ? 1 : 0;
        }

        int min_mid = 1000000;
        int max_mid = -1000000;
        int sum = 0;

        for(int j=0; j<5; j++)
        {
            if(j == min_idx || j == max_idx)
            {
                continue;
            }
            sum += scores[j];
            if(scores[j] < min_mid)
            {
                min_mid = scores[j];
            }
            if(scores[j] > max_mid)
            {
                max_mid = scores[j];
            }
        }

        if(max_mid - min_mid >= 4)
        {
            printf("KIN\n");
        }
        else
        {
            printf("%d\n", sum);
        }
    }
}
