#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int h[50];
    for(int i=0; i<N; i++)
    {
        scanf("%d", &h[i]);
    }

    int maxCount = 0;

    for(int i=0; i<N; i++)
    {
        int count = 0;

        for(int j=0; j<N; j++)
        {
            if(i == j) continue;

            double slope = (double)(h[j] - h[i]) / (j - i);
            int canSee = 1;

            if(i < j)
            {
                for(int k=i+1; k<j; k++)
                {
                    double expected = h[i] + slope * (k - i);
                    if(h[k] >= expected)
                    {
                        canSee = 0;
                        break;
                    }
                }
            }
            else
            {
                for(int k=j+1; k<i; k++)
                {
                    double expected = h[j] + slope * (k - j);
                    if(h[k] >= expected)
                    {
                        canSee = 0;
                        break;
                    }
                }
            }

            if(canSee)
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
        }
    }

    printf("%d\n", maxCount);

    return 0;
}
