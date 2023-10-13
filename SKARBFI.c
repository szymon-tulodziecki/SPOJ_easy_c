1#include <stdio.h>
#include <stdlib.h>

// Problem link: https://pl.spoj.com/problems/SKARBFI

/*
    0 - North
    1 - South
    2 - West
    3 - East      
*/

int main() {
    
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int tab[n][2];  //  Creating an array that can have a different number of rows and always 2 columns.
        
        for(int i = 0; i < n; i++)  //  Loading steps.
        {
            for(int j = 0; j < 2; j++)
            {
                scanf("%d", &tab[i][j]);
            }
        }
        

        int N, S, W, E;
        N = S = W = E = 0;  //   Creating variable directions.

        for(int i = 0; i < n; i++)  //  Summation of steps in the same direction.
        {
            for(int j = 0; j < 1; j++)
            {
                if(tab[i][j] == 0)
                {
                    N += tab[i][j+1];
                }
                else if(tab[i][j] == 1)
                {
                    S += tab[i][j+1];
                }
                else if(tab[i][j] == 2)
                {
                    W += tab[i][j+1];
                }
                else if(tab[i][j] == 3)
                {
                    E += tab[i][j+1];
                }
            }
        }

        if(N == S && W == S)    //  If the sum of steps in the same direction is equal, then the treasure is in the well.
        {
            printf("studnia\n");
        }
        else 
        {
            if(N > S)   //  If the sum of steps in the same direction is not equal, then the treasure is in the direction where the sum of steps is greater.
            {
                printf("0 %d\n", N-S);
            }
            else if(S > N)  
            {
                printf("1 %d\n", S-N);
            }
            if(W > E)
            {
                printf("2 %d\n", W-E);
            }
            else if(E > W)
            {
                printf("3 %d\n", E-W);
            }
        }
    }
    return 0;
}
