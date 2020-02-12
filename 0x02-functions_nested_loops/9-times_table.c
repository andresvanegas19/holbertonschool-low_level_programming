#include "holberton.h"

/**
 * jack_bauer  - This function is use to print the minute of the day
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

void times_table(void)
{
int c,  t, a, p, r;
        for (c = 0; c <= 9; c++)
        {
            for (t = 0; t <= 9; t++)
            {
                a = c * t;
                if (a <= 9 || c == 0 ){
                     putchar(' ');
                putchar(' ');
                putchar (a + '0');
                putchar(',');
               
                    
                }
                else{
                   putchar(' ');
                putchar( (a/10) + '0');
                putchar( (a%10) + '0');
                putchar(',');
                
                    
                }
             
                
                    
            }
            putchar('\n');     
        }
}
