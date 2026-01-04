#include <cstdio>
#include <algorithm>

namespace std
{
}

int main()
{
    int arr[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }

    std::sort(arr, arr+3);

    for(int j=0; j<3; j++)
    {
        printf("%d ", arr[j]);
    }
}
