#include <cstdio>
#include <cstring>

int main()
{
    int n;
    char name[21];

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%s", name);
        for(int j=0; j<strlen(name); j++)
        {
            if(name[j] >= 'A' && name[j] <= 'Z')
            {
                name[j] = name[j] - 'A' + 'a';
            }
        }
        printf("%s\n", name);
    }
}
