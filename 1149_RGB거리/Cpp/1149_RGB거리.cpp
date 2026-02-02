#include <cstdio>

int main()
{
    int N;
    scanf("%d", &N);

    int cost[1000][3];
    int dp[1000][3];

    for(int i=0; i<N; i++)
    {
        scanf("%d %d %d", &cost[i][0], &cost[i][1], &cost[i][2]);
    }

    dp[0][0] = cost[0][0];
    dp[0][1] = cost[0][1];
    dp[0][2] = cost[0][2];

    for(int i=1; i<N; i++)
    {
        dp[i][0] = cost[i][0] + ((dp[i-1][1] < dp[i-1][2]) ? dp[i-1][1] : dp[i-1][2]);
        dp[i][1] = cost[i][1] + ((dp[i-1][0] < dp[i-1][2]) ? dp[i-1][0] : dp[i-1][2]);
        dp[i][2] = cost[i][2] + ((dp[i-1][0] < dp[i-1][1]) ? dp[i-1][0] : dp[i-1][1]);
    }

    int ans = dp[N-1][0];
    if(dp[N-1][1] < ans) ans = dp[N-1][1];
    if(dp[N-1][2] < ans) ans = dp[N-1][2];

    printf("%d\n", ans);

    return 0;
}
