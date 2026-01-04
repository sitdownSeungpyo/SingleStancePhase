#include <cstdio>
#include <cstring>

int main()
{
    char j[1000];
    char doctor[1000];

    scanf("%s", j);
    scanf("%s", doctor);

    if(strlen(j) >= strlen(doctor))
    {
        printf("go");
    }
    else
    {
        printf("no");
    }
}
