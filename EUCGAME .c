#include <stdio.h>

// Problem link: https://pl.spoj.com/problems/EUCGAME/

void runEucgame(int a, int b)
{
    if(a == b)
    {
        printf("%d\n", a + b);
    }
    else if(a > b)
    {
        runEucgame(a - b, b);
    }
    else if(a < b)
    {
        runEucgame(a, b - a);
    }
}

//------------------------------------------------------------

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        runEucgame(a, b);
    }
    
    return 0;
}