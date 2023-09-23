#include <stdio.h>

//https://pl.spoj.com/problems/PA05_POT/

void  CheckLastNumberPowerOF(int x, int y)
{
    if(x == 0) printf("0\n"); 
    if(y == 0) printf("1\n");
    if(x % 10 == 0) printf("0\n");
    if(x % 10 == 1) printf("1\n");
    if(x % 10 == 2) //'2', '4', '8', 1'6', 3'2', 6'4'... -> In every next four power of two, the last digit will repeat. And that's also why we're checking modulo of y by four.
    {
        if(y % 4 == 1) printf("2\n");
        if(y % 4 == 2) printf("4\n");
        if(y % 4 == 3) printf("8\n");
        if(y % 4 == 0) printf("6\n");
    }
    if(x % 10 == 3) //'3', '9', 2'7', 8'1', 24'3', 72'9'... -> In every next four power of three the last digit will repeat. And that's also why we're checking modulo of y by four.
    {
        if(y % 4 == 1) printf("3\n");
        if(y % 4 == 2) printf("9\n");
        if(y % 4 == 3) printf("7\n");
        if(y % 4 == 0) printf("1\n");
    }
    if(x % 10 == 4) //'4', 1'6', 6'4', 25'6'... -> In every next two power of four, the last digit will repeat. And that's also why we're checking modulo of y by two.
    {
        if(y % 2 == 1) printf("4\n");
        if(y % 2 == 0) printf("6\n");
    }
    if(x % 10 == 5) printf("5\n"); //'5', 2'5', 12'5'... -> Every next power of five will have last digit equal to five. 
    if(x % 10 == 6) printf("6\n"); //'6', 3'6', 21'6'... -> Every next power of six will have last digit equal to six. 
    if(x % 10 == 7) // '7', 4'9', 34'3', 240'1', 1680'7'... -> In every next four power of seven, the last digit will repeat. And that's also why we're checking modulo of y by four.
    {
        if(y % 4 == 1) printf("7\n");
        if(y % 4 == 2) printf("9\n");
        if(y % 4 == 3) printf("3\n");
        if(y % 4 == 0) printf("1\n");
    }
    if(x % 10 == 8) // '8', 6'4', 51'2', 409'6'... -> In every next four power of eight, the last digit will repeat. And that's also why we're checking modulo of y by four.
    {
        if(y % 10 == 1) printf("8\n");
        if(y % 10 == 2) printf("4\n");
        if(y % 10 == 3) printf("2\n");
        if(y % 10 == 0) printf("6\n");

    }
    if(x % 10 == 9) // '9', 8'1', 72'9', 656'1'... -> In every next two power of nine, the last digit will repeat. And that's also why we're checking modulo of y by two.
    {
        if(y % 2 == 1) printf("9\n");
        if(y % 2 == 0) printf("1\n");
    }
    }

//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
int main()
{   

    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);

        CheckLastNumberPowerOF(a, b);
    }
    

    return 0;
}