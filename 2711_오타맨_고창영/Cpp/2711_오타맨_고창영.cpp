#include <cstdio>
#include <cstring>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int pos;
        char word[101];

        scanf("%d %s", &pos, word);

        int len = strlen(word);

        for(int j=0; j<len; j++)
        {
            if(j == pos - 1)
            {
                continue;
            }
            printf("%c", word[j]);
        }
        printf("\n");
    }
}
