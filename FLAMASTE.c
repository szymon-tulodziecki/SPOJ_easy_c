#include <stdio.h>

// Problem link: https://pl.spoj.com/problems/FLAMASTE/

int main()
{
    int t;
    scanf("%d", &t); 

    while(t--) 
    {
        char text[200];
        scanf("%s", text); 

        int count = 1; // Initialize a counter for consecutive characters.
        int i = 0;

        while(text[i] != '\0') // Loop through each character in the string until the end is reached.
        {
            if(text[i] != text[i + 1]) // If the current character is different from the next character.
            {
                if(count > 2) // If there are more than 2 consecutive characters, print the character followed by the count.
                {
                    printf("%c%d", text[i], count);
                }
                else if(count == 2) // If there are exactly 2 consecutive characters, print the character twice.
                {
                    printf("%c%c", text[i], text[i]);
                }
                else // If there is only 1 consecutive character, print it once.
                {
                    printf("%c", text[i]);
                }                    
                count = 1; // Reset the count for the next character. 
            }
            else // If the current character is the same as the next character.
            {
                count++; // Increment the count of consecutive characters.
            }
            i++; 
        }            
        printf("\n"); // Print a newline to separate the output for different test cases.
    }
    
   return 0; 
}