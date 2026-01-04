#include <cstdio>
#include <cstring>

int main()
{
    char line[1001];

    while(fgets(line, sizeof(line), stdin) != NULL)
    {
        if(line[0] == 'E' && line[1] == 'O' && line[2] == 'I')
        {
            if(line[3] == '\n' || line[3] == '\0' || line[3] == '\r')
            {
                break;
            }
        }

        for(int i=0; line[i] != '\0'; i++)
        {
            if(line[i] >= 'A' && line[i] <= 'Z')
            {
                line[i] = line[i] - 'A' + 'a';
            }
        }

        int found = 0;
        for(int i=0; line[i+3] != '\0'; i++)
        {
            if(line[i] == 'n' && line[i+1] == 'e' && line[i+2] == 'm' && line[i+3] == 'o')
            {
                found = 1;
                break;
            }
        }

        if(found)
        {
            printf("Found\n");
        }
        else
        {
            printf("Missing\n");
        }
    }
}
