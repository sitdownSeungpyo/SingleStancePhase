#include <cstdio>
#include <cstring>

int main()
{
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        int a;
        int b;
        char word[1001];

        scanf("%d %d %s", &a, &b, word);

        for(int j=0; word[j] != '\0'; j++)
        {
            int x = word[j] - 'A';
            int y = (a * x + b) % 26;
            word[j] = (char)(y + 'A');
        }

        printf("%s\n", word);
    }
}
