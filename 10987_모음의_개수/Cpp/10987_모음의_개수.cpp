#include <cstdio>
#include <cstring>

int main()
{
    char word[256];
    int count = 0;

    scanf("%s", word);

    for(int i=0; i<strlen(word); i++)
    {
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
        {
            count++;
        }
    }

    printf("%d", count);
}
