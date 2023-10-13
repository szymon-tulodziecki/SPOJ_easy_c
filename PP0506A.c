#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Problem link: https://pl.spoj.com/problems/PP0506A/

struct point // Creating a structure of points.
{
    char name[9]; 
    int x;
    int y;
    double distanceZeroPoint;
};
//---------------------------------------------------------------------------------------------
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        struct point *arr;
        arr = (struct point *)malloc(n * sizeof( struct point)); // Creation of a dynamically located array of 'points' structure.
        if(arr == NULL)
        {
            return -1;
        }

        for(int i = 0; i < n; i++)  
        {
            scanf("%s %d %d", arr[i].name, &arr[i].x, &arr[i].y); //  Loading coordinates of points.
            arr[i].distanceZeroPoint = sqrt(pow(arr[i].x, 2.0) + pow(arr[i].y, 2.0)); //    Calculating the distance from the origin of the coordinate system.
        }

        for(int i = 0; i < n - 1; i++) //   Sorting by distance from the origin of the coordinate system (ascending).
        {
            for(int j = 0; j < n - 1; j++)
            {
                if(arr[j].distanceZeroPoint > arr[j + 1].distanceZeroPoint)
                {
                    struct point hlp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = hlp;
                }
            }
        }

        for(int i = 0; i < n; i++) //   Display of sorted results.
        {
            printf("%s %d %d\n", arr[i].name, arr[i].x, arr[i].y);
        }

        free(arr);         
        printf("\n");
    }
    return 0;
}