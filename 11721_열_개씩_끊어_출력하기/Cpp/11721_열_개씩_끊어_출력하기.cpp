#include <cstdio>
#include <cstring>

int main()
{
    char word[1000];
    int len;

    scanf("%s", word);
    len = strlen(word);

    for(int i=0; i<len; i++)
    {
        printf("%c", word[i]);
        if((i+1) % 10 == 0)
        {
            printf("\n");
        }
    }

    if(len % 10 != 0)
    {
        printf("\n");
    }
}
