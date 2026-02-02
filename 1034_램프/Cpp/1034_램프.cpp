#include <cstdio>
#include <cstring>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    char lamp[50][51];
    for(int i=0; i<N; i++)
    {
        scanf("%s", lamp[i]);
    }

    int K;
    scanf("%d", &K);

    int maxCount = 0;

    for(int i=0; i<N; i++)
    {
        int zeros = 0;
        for(int j=0; j<M; j++)
        {
            if(lamp[i][j] == '0')
            {
                zeros++;
            }
        }

        if(zeros > K || (K - zeros) % 2 != 0)
        {
            continue;
        }

        int count = 0;
        for(int k=0; k<N; k++)
        {
            if(strcmp(lamp[i], lamp[k]) == 0)
            {
                count++;
            }
        }

        if(count > maxCount)
        {
            maxCount = count;
        }
    }

    printf("%d\n", maxCount);

    return 0;
}
