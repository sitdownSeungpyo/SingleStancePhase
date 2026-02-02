#include <cstdio>

int main()
{
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);

    int d1 = x;
    int d2 = y;
    int d3 = w - x;
    int d4 = h - y;

    int min = d1;
    if(d2 < min) min = d2;
    if(d3 < min) min = d3;
    if(d4 < min) min = d4;

    printf("%d\n", min);

}
