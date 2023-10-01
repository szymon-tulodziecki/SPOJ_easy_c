#include <stdio.h>

// Problem link: https://pl.spoj.com/problems/PRZEDSZK/

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int a, b;
        scanf("%d%d", &a, &b);

    
        for(int i = 10; ; i++) // Checking which number gives a remainder of zero.
        {
            if(i % a == 0 && i % b == 0)
            {
                printf("%d\n", i);
                break;
            }
        }
    }
    return 0;
}