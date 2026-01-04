#include <cstdio>

int main()
{
    int t;
    int n;
    int sem;
    double grade;
    int total;
    double sum;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        total = 0;
        sum = 0.0;

        for(int j=0; j<n; j++)
        {
            scanf("%d %lf", &sem, &grade);
            total += sem;
            sum += grade * sem;
        }

        printf("%d %.1f\n", total, sum / total);
    }
}
