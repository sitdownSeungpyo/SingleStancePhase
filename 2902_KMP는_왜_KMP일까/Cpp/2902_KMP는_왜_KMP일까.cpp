#include <cstdio>
#include <cstring>

int main()
{
    char word[101];
    int len;

    scanf("%s", word);
    len = strlen(word);

    printf("%c", word[0]);
    for(int i=1; i<len; i++)
    {
        if(word[i-1] == '-')
        {
            printf("%c", word[i]);
        }
    }
}
