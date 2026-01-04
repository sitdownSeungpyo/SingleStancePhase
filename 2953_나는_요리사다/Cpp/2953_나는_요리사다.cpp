#include <cstdio>

int main()
{
    int score[5][4];
    int sum;
    int max = 0;
    int winner = 0;

    for(int i=0; i<5; i++)
    {
        sum = 0;
        for(int j=0; j<4; j++)
        {
            scanf("%d", &score[i][j]);
            sum += score[i][j];
        }
        if(sum > max)
        {
            max = sum;
            winner = i+1;
        }
    }

    printf("%d %d", winner, max);
}
