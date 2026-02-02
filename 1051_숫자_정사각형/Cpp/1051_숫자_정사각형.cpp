#include <cstdio>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    char board[50][51];
    for(int i=0; i<n; i++)
    {
        scanf("%s", board[i]);
    }

    int maxLen = 1;
    int limit = (n < m) ? n : m;

    for(int len=limit; len>=1; len--)
    {
        for(int i=0; i<=n-len; i++)
        {
            for(int j=0; j<=m-len; j++)
            {
                if(board[i][j] == board[i][j+len-1] &&
                   board[i][j] == board[i+len-1][j] &&
                   board[i][j] == board[i+len-1][j+len-1])
                {
                    if(len > maxLen)
                    {
                        maxLen = len;
                    }
                }
            }
        }
    }

    printf("%d\n", maxLen * maxLen);

    return 0;
}
