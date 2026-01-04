#include <cstdio>
#include <cstring>

int main()
{
    char word[11];
    int found = 0;

    for(int i=1; i<=5; i++)
    {
        scanf("%s", word);
        if(strstr(word, "FBI") != NULL)
        {
            if(found != 0)
            {
                printf(" ");
            }
            printf("%d", i);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("HE GOT AWAY!");
    }
}
