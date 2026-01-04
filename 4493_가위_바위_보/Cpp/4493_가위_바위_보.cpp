#include <cstdio>

int main()
{
    int t;
    int n;
    char p1, p2;
    int win1, win2;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d", &n);
        win1 = 0;
        win2 = 0;

        for(int j=0; j<n; j++)
        {
            scanf(" %c %c", &p1, &p2);

            if(p1 == p2)
            {
                continue;
            }
            else if((p1 == 'R' && p2 == 'S') || (p1 == 'S' && p2 == 'P') || (p1 == 'P' && p2 == 'R'))
            {
                win1++;
            }
            else
            {
                win2++;
            }
        }

        if(win1 > win2)
        {
            printf("Player 1\n");
        }
        else if(win2 > win1)
        {
            printf("Player 2\n");
        }
        else
        {
            printf("TIE\n");
        }
    }
}
