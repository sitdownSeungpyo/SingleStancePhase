#include <cstdio>

int main()
{
    char line[101];

    if(fgets(line, sizeof(line), stdin) == NULL)
    {
        return 0;
    }

    for(int i=0; line[i] != '\0'; i++)
    {
        char c = line[i];

        if(c >= 'A' && c <= 'Z')
        {
            c = c + 13;
            if(c > 'Z')
            {
                c = c - 26;
            }
            line[i] = c;
        }
        else if(c >= 'a' && c <= 'z')
        {
            c = c + 13;
            if(c > 'z')
            {
                c = c - 26;
            }
            line[i] = c;
        }
    }

    printf("%s", line);
}
