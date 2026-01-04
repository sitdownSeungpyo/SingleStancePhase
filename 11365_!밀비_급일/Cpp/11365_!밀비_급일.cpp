#include <cstdio>
#include <cstring>

int main()
{
    char wrt[1000];
    int len;

    while(fgets(wrt, sizeof(wrt), stdin) != NULL)
    {
        len = strlen(wrt);
        if(len > 0 && wrt[len-1] == '\n')
        {
            wrt[len-1] = '\0';
            len--;
        }

        if(strcmp(wrt, "END") == 0)
        {
            break;
        }

        for(int i=len-1; i>=0; i--)
        {
            printf("%c", wrt[i]);
        }
        printf("\n");
    }

    return 0;
}
