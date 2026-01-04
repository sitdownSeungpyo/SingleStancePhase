#include <cstdio>
#include <cstring>

int main()
{
    char word[101];
    char ban[] = "CAMBRIDGE";

    scanf("%s", word);

    int len = strlen(word);

    for(int i=0; i<len; i++)
    {
        int skip = 0;
        for(int j=0; ban[j] != '\0'; j++)
        {
            if(word[i] == ban[j])
            {
                skip = 1;
                break;
            }
        }

        if(skip == 0)
        {
            printf("%c", word[i]);
        }
    }
}
