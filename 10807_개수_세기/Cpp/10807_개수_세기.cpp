#include <cstdio>

int main()
{
    int n;
    int numbers[100];
    int target;
    int count = 0;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    scanf("%d", &target);

    for(int i=0; i<n; i++)
    {
        if(numbers[i] == target)
        {
            count++;
        }
    }

    printf("%d", count);
}
