#include <stdio.h>
#include <malloc.h>

// Problem link: https://pl.spoj.com/problems/PP0502B/

int main()
{
        int t;
    scanf("%d", &t);

    while(t--)
    {
        int s;
        scanf("%d", &s);

        int *arr = (int *)malloc(s * sizeof(int));

        for(int i = 0; i < s; i++)
        {
            scanf("%d", &arr[i]);
        }

        for(int i = s - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }

        printf("\n");
    }
    return 0;
}