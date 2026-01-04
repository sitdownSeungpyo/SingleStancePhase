#include <cstdio>
#include <algorithm>


namespace std
{

}

int main()
{
    int n;
    scanf("%d", &n);

    int ap[50];
    
    for(int i=0; i<n; i++)
    {
        scanf("%d", &ap[i]);
    }

    std::sort(ap, ap+n);

    int result = ap[0]*ap[n-1];

    printf("%d", result);


}