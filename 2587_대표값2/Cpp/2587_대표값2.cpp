#include <cstdio>

int main()
{
    int n[5];
    int sum = 0;

    for(int i=0; i<5; i++)
    {
        scanf("%d", &n[i]);
        sum += n[i];
    }

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(n[i] > n[j])
            {
                int temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }

    printf("%d\n%d", sum / 5, n[2]);
}
