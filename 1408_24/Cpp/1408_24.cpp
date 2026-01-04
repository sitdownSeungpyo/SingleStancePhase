#include <cstdio>

int main()
{
    int h1, m1, s1;
    int h2, m2, s2;
    int start, end, diff;

    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);

    start = h1 * 3600 + m1 * 60 + s1;
    end = h2 * 3600 + m2 * 60 + s2;

    diff = end - start;
    if(diff <= 0)
    {
        diff += 24 * 3600;
    }

    h1 = diff / 3600;
    diff %= 3600;
    m1 = diff / 60;
    s1 = diff % 60;

    printf("%02d:%02d:%02d", h1, m1, s1);
}
