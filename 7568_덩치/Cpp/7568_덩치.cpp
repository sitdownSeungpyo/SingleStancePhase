#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int weight[50];
    int height[50];

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &weight[i], &height[i]);
    }

    for(int i=0; i<n; i++)
    {
        int rank = 1;
        for(int j=0; j<n; j++)
        {
            if(weight[j] > weight[i] && height[j] > height[i])
            {
                rank++;
            }
        }

        if(i > 0)
        {
            printf(" ");
        }
        printf("%d", rank);
    }
}
