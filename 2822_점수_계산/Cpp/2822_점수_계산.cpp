#include <cstdio>

int main()
{
    int scores[8];
    int used[8] = {0};
    int selected[5];
    int sum = 0;

    for(int i=0; i<8; i++)
    {
        scanf("%d", &scores[i]);
    }

    for(int i=0; i<5; i++)
    {
        int max_score = 0;
        int max_index = 0;

        for(int j=0; j<8; j++)
        {
            if(used[j] == 0 && scores[j] > max_score)
            {
                max_score = scores[j];
                max_index = j;
            }
        }

        used[max_index] = 1;
        selected[i] = max_index + 1;
        sum += scores[max_index];
    }

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(selected[i] > selected[j])
            {
                int temp = selected[i];
                selected[i] = selected[j];
                selected[j] = temp;
            }
        }
    }

    printf("%d\n", sum);

    for(int i=0; i<5; i++)
    {
        if(i > 0)
        {
            printf(" ");
        }
        printf("%d", selected[i]);
    }
}
