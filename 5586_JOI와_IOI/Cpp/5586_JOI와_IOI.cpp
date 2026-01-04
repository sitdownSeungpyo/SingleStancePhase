#include <cstdio>
#include <cstring>

int main()
{
    char word[1000001];
    scanf("%s", word);

    int len = strlen(word);
    int joi = 0;
    int ioi = 0;

    for(int i=0; i<len-2; i++)
    {
        if(word[i] == 'J' && word[i+1] == 'O' && word[i+2] == 'I')
        {
            joi++;
        }
        if(word[i] == 'I' && word[i+1] == 'O' && word[i+2] == 'I')
        {
            ioi++;
        }
    }

    printf("%d\n%d", joi, ioi);
}
