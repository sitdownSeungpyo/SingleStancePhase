#include <cstdio>

int main()
{
    int n;
    int a, b, c, d;
    int count[7];
    int max = 0;
    int prize;
    int pair1, pair2, pair_count, single_max;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        for(int j=1; j<=6; j++)
        {
            count[j] = 0;
        }

        scanf("%d %d %d %d", &a, &b, &c, &d);
        count[a]++;
        count[b]++;
        count[c]++;
        count[d]++;

        prize = 0;
        pair1 = 0;
        pair2 = 0;
        pair_count = 0;
        single_max = 0;

        for(int j=1; j<=6; j++)
        {
            if(count[j]==4)
            {
                prize = 50000+j*5000;
            }
            else if(count[j]==3)
            {
                prize = 10000+j*1000;
            }
            else if(count[j]==2)
            {
                pair_count++;
                if(pair1==0)
                {
                    pair1 = j;
                }
                else
                {
                    pair2 = j;
                }
            }
            else if(count[j]==1)
            {
                if(j>single_max)
                {
                    single_max = j;
                }
            }
        }

        if(prize==0)
        {
            if(pair_count==2)
            {
                prize = 2000+pair1*500+pair2*500;
            }
            else if(pair_count==1)
            {
                prize = 1000+pair1*100;
            }
            else
            {
                prize = single_max*100;
            }
        }

        if(prize>max)
        {
            max = prize;
        }
    }

    printf("%d", max);
}
