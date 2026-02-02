#include <cstdio>
#include <cstring>

int main()
{
    char s[10];

    while(1)
    {
        scanf("%s", s);

        if(s[0] == '0' && s[1] == '\0')
        {
            break;
        }

        int len = strlen(s);
        int isPalindrome = 1;

        for(int i=0; i<len/2; i++)
        {
            if(s[i] != s[len-1-i])
            {
                isPalindrome = 0;
                break;
            }
        }

        if(isPalindrome)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
}
