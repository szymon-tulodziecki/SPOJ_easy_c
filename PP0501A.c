#include <stdio.h>

// Problem link: https://pl.spoj.com/problems/PP0501A/

void NWD(int x, int y)  // Eucalidean algorithm: https://en.wikipedia.org/wiki/Euclidean_algorithm
{
    if(x % y == 0)
    {
        printf("%d \n", y);
    }
    else
    {
        int hlp = x;
        x = y;
        y = hlp % y;

        NWD(x, y);
    }
}
//--------------------------------------------
int main()
{

    int t;
    scanf("%d", &t);

    while(t--)
    {
        int a, b;

        scanf("%d %d", &a, &b);
        NWD(a, b);
    }
    
    return 0;
}