#include <cstdio>

int main()
{
    int n;
    char word[31];

    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf(" %30[^\n]", word);
        if(word[0] >= 'a' && word[0] <= 'z')
        {
            word[0] = word[0] - 'a' + 'A';
        }
        printf("%s\n", word);
    }
}
