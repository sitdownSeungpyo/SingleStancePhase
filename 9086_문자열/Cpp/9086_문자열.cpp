#include <cstdio>
#include <cstring>

int main()
{
    int t;
    char input[1001];

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%s", input);
        printf("%c%c\n", input[0], input[strlen(input)-1]);
    }
}
