#include <cstdio>
#include <cstring>

int main()
{
    char word[101];
    int count[26] = {0};

    scanf("%s", word);

    for(int i=0; i<strlen(word); i++)
    {
        count[word[i]-'a']++;
    }

    for(int i=0; i<26; i++)
    {
        printf("%d ", count[i]);
    }
}
