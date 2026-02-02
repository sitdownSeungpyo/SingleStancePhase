#include <cstdio>

int main()
{
    int n, A, B;
    scanf("%d %d %d", &n, &A, &B);

    int round = 0;

    while(A != B)
    {
        A = (A + 1) / 2;
        B = (B + 1) / 2;
        round++;
    }

    printf("%d\n", round);

    return 0;
}
