#include <cstdio>
#include <cstring>

int a(char* s)
{
    int ap[26] = {0};
    int len = strlen(s);

    for(int i=0; i<len; i++)
    {
        int idx = s[i] - 'a';

        if(ap[idx] == 0)
        {
            ap[idx] = 1;
        }
        else
        {
            if(s[i-1] != s[i])
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int N;
    scanf("%d", &N);

    int count = 0;

    for(int i=0; i<N; i++)
    {
        char word[101];
        scanf("%s", word);

        if(a(word))
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
