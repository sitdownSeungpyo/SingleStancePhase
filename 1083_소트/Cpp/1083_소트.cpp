#include <cstdio>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[50];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int s;
    scanf("%d", &s);

    for(int i=0; i<n && s>0; i++)
    {
        int maxIdx = i;
        int maxVal = arr[i];

        for(int j=i+1; j<n && j-i<=s; j++)
        {
            if(arr[j] > maxVal)
            {
                maxVal = arr[j];
                maxIdx = j;
            }
        }

        for(int j=maxIdx; j>i; j--)
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            s--;
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
        if(i < n-1) printf(" ");
    }
    printf("\n");
}
