#include <cstdio>
#include <cstring>

int main()
{
    char word[101];
    int pos[26];

    for(int i=0; i<26; i++)
    {
        pos[i] = -1;
    }

    scanf("%s", word);

    int len = strlen(word);

    for(int i=0; i<len; i++)
    {
        int idx = word[i] - 'a';
        if(pos[idx] == -1)
        {
            pos[idx] = i;
        }
    }

    for(int i=0; i<26; i++)
    {
        if(i > 0)
        {
            printf(" ");
        }
        printf("%d", pos[i]);
    }
}
