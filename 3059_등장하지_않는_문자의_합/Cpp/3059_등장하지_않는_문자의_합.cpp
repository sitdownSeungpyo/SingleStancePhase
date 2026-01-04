#include <cstdio>
#include <cstring>

int main()
{
    int t;
    int alb[26];
    int sum;
    char word[1001];

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%s", word);
        for(int j=0; j<26; j++)
        {
            alb[j] = 0;
        }

        sum = 0;

        for(int j=0; word[j] != '\0'; j++)
        {
            if(word[j] >= 'A' && word[j] <= 'Z')
            {
                alb[word[j] - 'A'] = 1;
            }
        }

        for(int k=0; k<26; k++)
        {
            if(alb[k] == 0)
            {
                sum += ('A' + k);
            }
        }
        printf("%d\n", sum);
    }

}
