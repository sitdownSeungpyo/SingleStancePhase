#include <cstdio>
#include <cstring>

int main()
{
    int n;
    char before[1001];
    char after[1001];

    scanf("%d", &n);

    scanf("%s", before);
    scanf("%s", after);

    int len = strlen(before);
    int ok = 1;

    if(n % 2 == 0)
    {
        for(int i=0; i<len; i++)
        {
            if(before[i] != after[i])
            {
                ok = 0;
                break;
            }
        }
    }
    else
    {
        for(int i=0; i<len; i++)
        {
            char del = (before[i] == '0') ? '1' : '0';
            if(del != after[i])
            {
                ok = 0;
                break;
            }
        }
    }

    if(ok)
    {
        printf("Deletion succeeded");
    }
    else
    {
        printf("Deletion failed");
    }
}
