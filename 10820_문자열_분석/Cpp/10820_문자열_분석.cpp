#include <cstdio>
#include <cstring>

int main()
{
    char line[1001];

    while(fgets(line, sizeof(line), stdin) != NULL)
    {
        int lower = 0;
        int upper = 0;
        int digit = 0;
        int space = 0;

        for(int i=0; line[i] != '\0'; i++)
        {
            char c = line[i];

            if(c >= 'a' && c <= 'z')
            {
                lower++;
            }
            else if(c >= 'A' && c <= 'Z')
            {
                upper++;
            }
            else if(c >= '0' && c <= '9')
            {
                digit++;
            }
            else if(c == ' ')
            {
                space++;
            }
        }

        printf("%d %d %d %d\n", lower, upper, digit, space);
    }
}
