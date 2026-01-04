#include <cstdio>
#include <cstring>

int main()
{
    char n[11];
    int c[10] = {0};
    int len;

    scanf("%s", n);
    len = strlen(n);

    for(int i=0; i<len; i++)
    {
        c[n[i]-'0']++;
    }

    for(int i=9; i>=0; i--)
    {
        for(int j=0; j<c[i]; j++)
        {
            printf("%d", i);
        }
    }
}
