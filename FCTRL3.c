#include <stdio.h>

//https://pl.spoj.com/problems/FCTRL3/

int main()
{
    int t;
    scanf("%d", &t);
    
    while(t--)
    {
        int n;
        scanf("%d", &n);

        if(n >= 10)
        {
            printf("0 0 \n");
        }
        else
        {
            int strenght = 1;

            for(int i = 1; i <= n; i++)
            {
                strenght *= i;
            }

            printf("%d %d\n",((strenght / 10) % 10),strenght % 10);

        }
    }
    return 0;
}