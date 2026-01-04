#include <cstdio>
#include <algorithm>
#include <functional>

namespace std
{

}

int main()
{
    int n;
    scanf("%d", &n);

    int A[100];
    int B[100];

    for(int i=0 ; i < n ; i++)
    {
        scanf("%d", &A[i]);
    }

    for(int i=0 ; i < n ; i++)
    {
        scanf("%d", &B[i]);
    }

    std::sort(A, A+n);
    
    // for(int p=0; p<n; p++)
    // {
    //     printf("%d", A[p]);
    // }

    std::sort(B, B+n,  std::greater<int>());

    // for(int p=0; p<n; p++)
    // {
    //     printf("%d", B[p]);
    // }

    int S=0;

    for(int j=0; j<n; j++)
    {
        S+= A[j]*B[j];
    }

    printf("%d", S);
}