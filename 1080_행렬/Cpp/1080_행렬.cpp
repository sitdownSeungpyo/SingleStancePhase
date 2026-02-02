#include <cstdio>

int N, M;
int A[50][50];
int B[50][50];

void flip(int r, int c)
{
    for(int i=r; i<r+3; i++)
    {
        for(int j=c; j<c+3; j++)
        {
            A[i][j] = 1 - A[i][j];
        }
    }
}

int main()
{
    scanf("%d %d", &N, &M);

    for(int i=0; i<N; i++)
    {
        char row[51];
        scanf("%s", row);
        for(int j=0; j<M; j++)
        {
            A[i][j] = row[j] - '0';
        }
    }

    for(int i=0; i<N; i++)
    {
        char row[51];
        scanf("%s", row);
        for(int j=0; j<M; j++)
        {
            B[i][j] = row[j] - '0';
        }
    }

    int count = 0;

    for(int i=0; i<=N-3; i++)
    {
        for(int j=0; j<=M-3; j++)
        {
            if(A[i][j] != B[i][j])
            {
                flip(i, j);
                count++;
            }
        }
    }

    int same = 1;
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            if(A[i][j] != B[i][j])
            {
                same = 0;
                break;
            }
        }
        if(!same) break;
    }

    if(same)
    {
        printf("%d\n", count);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}
