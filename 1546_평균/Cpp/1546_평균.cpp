#include <cstdio>

int main()
{
    int n;
    int score[1000];
    int max = 0;
    double sum = 0.0;

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &score[i]);

        if(score[i] > max)
        {
            max = score[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        sum += (double)score[i] / max * 100.0;
    }

    printf("%f", sum / n);
}
