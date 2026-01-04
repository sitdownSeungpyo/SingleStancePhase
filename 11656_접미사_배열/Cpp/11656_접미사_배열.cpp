#include <cstdio>
#include <cstring>
#include <cstdlib>

int compare_suffix(const void* a, const void* b)
{
    const char* s1 = *(const char**)a;
    const char* s2 = *(const char**)b;
    return strcmp(s1, s2);
}

int main()
{
    char word[1001];
    scanf("%s", word);

    int len = strlen(word);
    char* suffix[1001];

    for(int i=0; i<len; i++)
    {
        suffix[i] = word + i;
    }

    qsort(suffix, len, sizeof(char*), compare_suffix);

    for(int i=0; i<len; i++)
    {
        printf("%s\n", suffix[i]);
    }
}
