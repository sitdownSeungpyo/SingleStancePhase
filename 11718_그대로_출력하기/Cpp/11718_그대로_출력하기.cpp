#include <cstdio>

int main()
{
    char wrt[1001];

    while(fgets(wrt, sizeof(wrt), stdin) != NULL)
    {
        printf("%s", wrt);
    }
}
