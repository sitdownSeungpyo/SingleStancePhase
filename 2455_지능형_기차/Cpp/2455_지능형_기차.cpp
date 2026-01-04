#include <cstdio>

int main()
{
    int out, in;
    int current = 0;
    int max = 0;

    for(int i=0; i<4; i++)
    {
        scanf("%d %d", &out, &in);
        current += in - out;
        if(current > max)
        {
            max = current;
        }
    }

    printf("%d", max);
}
