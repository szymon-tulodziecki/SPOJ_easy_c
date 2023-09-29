#include <stdio.h>

// Problem link: https://pl.spoj.com/problems/BFN1/

//------------------------------------------------------------------

int reverseNumber(int y) //Number reversal function.
{
    int reversed = 0;
    
    while(y != 0)
    {
        int digit = y % 10;
        reversed = reversed * 10 + digit;
        y /= 10;
    }
    return reversed;
}

//------------------------------------------------------------------

void findPalindrome(int x, int d)
{
    int reversedNumber = reverseNumber(x);
    
    
    /* //If the inverted number is equal to the original number, this means that it is a palindorm. 
    Therefore, we display this number and how many times we had to add the original with the inverted value.*/
    
    if(x == reversedNumber)   
    {
        printf("%d %d\n", x, d);
    }
    else
    {   
        /*If a number is not a palindrome as intended, we add to it, its inverted version. 
        We continue this operation until we find a palindrome of the number, while counting the number of times we had to perform such an operation. */
        
        d++;
        findPalindrome(x + reversedNumber, d);
    }
}

//------------------------------------------------------------------

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);

        int c = 0;

        if(n < 10) // If the number is less than 10, we must display it. In this case, the number of operations required on this number will always be 0.
        {
            printf("%d %d\n", n, c);
        }
        else // In other situations we're running function, which task is to find the palindrome.
        {
            findPalindrome(n, c);
        }
    }
    return 0;
}