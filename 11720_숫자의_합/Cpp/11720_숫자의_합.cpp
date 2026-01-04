#include <cstdio>
#include <cstring>

int main()
{
    int n;
    char number[101];
    int sum = 0;

    scanf("%d", &n);
    scanf("%s", number);

    for(int i=0; i<n; i++)
    {
        sum += number[i] - '0';
    }

    printf("%d", sum);
}
