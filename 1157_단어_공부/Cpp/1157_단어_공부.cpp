#include <cstdio>
#include <algorithm>


char word[10000000];
int alb[26];

int main()
{
    scanf("%s", word);

    for(int i=0; word[i] != '\0'; i++)
    {
        char c = word[i];
        if(c>='a' && c<='z')
        {
            alb[c-'a']++;
        }
        else if(c>='A' && c<='Z')
        {
            alb[c-'A']++;
        }
    }

    int max_count = -1;
    char result='?';
    bool d=false;
    for (int i = 0; i < 26; i++)
    {
        if (alb[i] > max_count)
        {
            max_count = alb[i];
            result = (char)(i + 'A');
            d = false;
        } 
        else if (alb[i] == max_count && max_count != 0)
        {
            d = true;
        }
    }


    if (d)
    {
        printf("?\n");
    }
    else 
    {
        printf("%c\n", result);
    }
}