#include <cstdio>
#include <cstring>

int main()
{
    int n;
    char arr[10];
    int number;
    int diff;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int value = 0;

        scanf("%s", arr);

        value = (arr[0]-'A')*26*26 + (arr[1]-'A')*26 + (arr[2]-'A');
        number = 0;
        for(int j=4; j<8; j++)
        {
            number = number * 10 + (arr[j]-'0');
        }

        diff = value - number;
        if(diff < 0)
        {
            diff = -diff;
        }

        if(diff <= 100)
        {
            printf("nice\n");
        }
        else
        {
            printf("not nice\n");
        }
    }
}
