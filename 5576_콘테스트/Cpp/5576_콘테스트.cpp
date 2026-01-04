#include <cstdio>

int main()
{
    int w[10];
    int k[10];

    for(int i=0; i<10; i++)
    {
        scanf("%d", &w[i]);
    }
    for(int i=0; i<10; i++)
    {
        scanf("%d", &k[i]);
    }

    for(int i=0; i<10; i++)
    {
        for(int j=i+1; j<10; j++)
        {
            if(w[i] < w[j])
            {
                int temp = w[i];
                w[i] = w[j];
                w[j] = temp;
            }
            if(k[i] < k[j])
            {
                int temp = k[i];
                k[i] = k[j];
                k[j] = temp;
            }
        }
    }

    int wsum = w[0] + w[1] + w[2];
    int ksum = k[0] + k[1] + k[2];

    printf("%d %d", wsum, ksum);
}
