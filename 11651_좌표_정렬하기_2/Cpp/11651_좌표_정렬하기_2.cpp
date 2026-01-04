#include <cstdio>
#include <algorithm>

struct Point
{
    int x;
    int y;
};

bool compare_point(const Point& p1, const Point& p2)
{
    if(p1.y != p2.y)
    {
        return p1.y < p2.y;
    }
    return p1.x < p2.x;
}

int main()
{
    int n;
    scanf("%d", &n);

    Point points[100000];

    for(int i=0; i<n; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    std::sort(points, points + n, compare_point);

    for(int i=0; i<n; i++)
    {
        printf("%d %d\n", points[i].x, points[i].y);
    }
}
