#include <cstdio>

int main()
{
    int n;
    char word[51];

    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf(" %50[^\n]", word);
        printf("%d. %s\n", i, word);
    }
}
