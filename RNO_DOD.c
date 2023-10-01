#include <stdio.h>
#include <malloc.h>

// Problem link: https://pl.spoj.com/submit/RNO_DOD/

int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, sumOf = 0;
        scanf("%d", &n);

        int *arr;
        arr = (int *)malloc(n * sizeof(int)); 

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for(int i = 0; i < n; i++)
        {
            sumOf += arr[i];    
        }

        printf("%d \n", sumOf);
        free(arr);

    }
    return 0;
}