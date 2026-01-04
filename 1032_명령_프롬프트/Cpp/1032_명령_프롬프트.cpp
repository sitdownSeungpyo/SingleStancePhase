#include <cstdio>
#include <algorithm>
#include <functional>
#include <cstring>

namespace std
{

}


int main()
{
    int n;
    scanf("%d", &n);

    char a[51][51];

    for(int i=0; i<n; i++)
    {
        scanf("%s", a[i]);
    }

    int len = strlen(a[0]);
    char data[51];

    for(int i=0; i<len; i++)
    {
        char c=a[0][i];
        bool is_same = true;

        for(int j=1; j<n; j++)
        {
            if(a[j][i] != c)
            {
                is_same = false;
                break;
            }
        }

        if (is_same)
        {
            data[i]=c;
        }
        else
        {
            data[i]='?';
        }
    }
    data[len]='\0';
    printf("%s\n", data);

}