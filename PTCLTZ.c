#include <stdio.h>

// Problem link: https://www.spoj.com/problems/PTCLTZ/

void calculateCollatz(int n, int x)
{
    if(n == 1) // We need to print the number of steps taken to reach 1
    {
        printf("%d\n", x);
    }
    else
    {
        if(n % 2 == 0)
        {
            calculateCollatz((n / 2), (x + 1)); // n / 2 because the n is even
        }
        else if(n % 2 == 1) 
        {
            calculateCollatz(((3 * n) + 1), (x + 1)); // (3 * n) + 1 because the n is odd
        }
    }
}

//-----------------------------------------------------------------------------------------------

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int s;
        scanf("%d", &s);

        calculateCollatz(s, 0); // 0 is the initial value of x
    }
    return 0;
}