#include <cstdio>
#include <cstring>

int main()
{
    char line[100];

    if(scanf("%s", line) != 1)
    {
        return 0;
    }

    int count = 0;

    for(int i=0; line[i] != '\0'; i++)
    {
        if(line[i] == ',')
        {
            count++;
        }
    }

    printf("%d", count+1);
}
