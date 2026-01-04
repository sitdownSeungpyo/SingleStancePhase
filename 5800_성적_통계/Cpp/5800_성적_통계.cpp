#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    for(int c=1; c<=n; c++)
    {
        int m;
        scanf("%d", &m);

        int scores[1000];

        for(int i=0; i<m; i++)
        {
            scanf("%d", &scores[i]);
        }

        for(int i=0; i<m; i++)
        {
            for(int j=i+1; j<m; j++)
            {
                if(scores[i] > scores[j])
                {
                    int temp = scores[i];
                    scores[i] = scores[j];
                    scores[j] = temp;
                }
            }
        }

        int max = scores[m-1];
        int min = scores[0];
        int largest_gap = 0;

        for(int i=1; i<m; i++)
        {
            int gap = scores[i] - scores[i-1];
            if(gap > largest_gap)
            {
                largest_gap = gap;
            }
        }

        printf("Class %d\n", c);
        printf("Max %d, Min %d, Largest gap %d\n", max, min, largest_gap);
    }
}
