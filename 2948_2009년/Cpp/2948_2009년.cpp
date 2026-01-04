#include <cstdio>

int main()
{
    int m, d;
    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const char* week[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int total = 0;

    scanf("%d %d", &m, &d);

    if(m > 12)
    {
        int temp = m;
        m = d;
        d = temp;
    }

    for(int i=0; i<m-1; i++)
    {
        total += days_in_month[i];
    }
    total += d - 1;

    printf("%s", week[total % 7]);
}
