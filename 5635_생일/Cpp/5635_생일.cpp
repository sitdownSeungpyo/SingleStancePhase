#include <cstdio>
#include <cstring>

int main()
{
    int n;
    scanf("%d", &n);

    char name[101];
    int d;
    int m;
    int y;

    char young[101] = "";
    char old[101] = "";
    int y_d = 0;
    int y_m = 0;
    int y_y = 0;
    int o_d = 0;
    int o_m = 0;
    int o_y = 0;

    for(int i=0; i<n; i++)
    {
        scanf("%s %d %d %d", name, &d, &m, &y);

        if(i == 0)
        {
            strcpy(young, name);
            strcpy(old, name);
            y_d = o_d = d;
            y_m = o_m = m;
            y_y = o_y = y;
        }
        else
        {
            if(y > y_y || (y == y_y && (m > y_m || (m == y_m && d > y_d))))
            {
                strcpy(young, name);
                y_d = d;
                y_m = m;
                y_y = y;
            }

            if(y < o_y || (y == o_y && (m < o_m || (m == o_m && d < o_d))))
            {
                strcpy(old, name);
                o_d = d;
                o_m = m;
                o_y = y;
            }
        }
    }

    printf("%s\n%s", young, old);
}
