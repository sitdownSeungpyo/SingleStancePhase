#include <cstdio>
#include <cstring>
#include <cctype>

int main()
{
    char input[100];
    scanf("%s", input);

    for(int i=0; i<strlen(input); i++)
    {
        if(input[i] >= 'a' && input[i] <= 'z')
        {
            input[i] = input[i] - 'a' + 'A';
        }
        else
        {
            input[i] = input[i] - 'A' + 'z' - 25;
        }
    }

    printf("%s", input);
}
