/*
* Author: Eskabore
* Purpose: draw a right-aligned pyramid
* Language C
*/
#include <cs50.h>
#include <stdio.h>

/* Prompt user for input & draw Pyramid */
int main(void)
{
    int num = 0;

/* Prompt user input until value is > 0 & < 9 */
    do
    {
        num = get_int("Enter a digit: ");
        printf("#");
    }
    while (height < 1 || height > 8);


/* Draw a right-aligned pyramid based on input value */
    for (int i = 0; i < height; i++)
    {
        for (int j = 7; j > i ; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}