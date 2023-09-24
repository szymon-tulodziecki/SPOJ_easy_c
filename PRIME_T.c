#include <stdio.h>
#include <math.h>

// Problem link: https://pl.spoj.com/problems/PRIME_T/

void checkPrimeT(int x)
{
   
    for(int i = 2; i <= sqrt(x); i++)
    {
        if(x % i == 0)
        {
         printf("NIE\n");
         return;
        }
       
    } 
    printf("TAK\n");
    
    
}
//---------------------------------------------------------------------------------------------
int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);
        
        if(n <= 1)
        {
            printf("NIE\n");
        }
        else
        {
            checkPrimeT(n);

        }
    }

    return 0;
}