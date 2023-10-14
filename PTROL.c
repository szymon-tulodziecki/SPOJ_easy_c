#include <stdio.h>

// Problem link: https://pl.spoj.com/problems/PTROL/

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int tab[n];
        
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &tab[i]);
        }
        
        int temp = tab[0];

        for(int i = 0; i < n - 1; i++)
        {
            tab[i] = tab[i + 1];
        }

        tab[n - 1] = temp;

        for(int i = 0; i < n; i++)
        {
            printf("%d ", tab[i]);
        }

        printf("\n");
    }
    return 0;
}