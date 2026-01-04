#include <cstdio>
#include <cstring>

int main()
{
    char word[1001];
    scanf("%s", word);

    for(int i=0; word[i] != '\0'; i++)
    {
        char c = word[i] - 3;
        if(c < 'A')
        {
            c += 26;
        }
        word[i] = c;
    }

    printf("%s", word);
}
