#include <cstdio>

int main()
{
    int t;
    int candy, people;

    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        scanf("%d %d", &candy, &people);
        printf("You get %d piece(s) and your dad gets %d piece(s).\n", candy / people, candy % people);
    }
}
