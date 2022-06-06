#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Print comb 4 
*
* Return: Always 0 (Success)
*/
Int main(void)
{
        int i, e, g;

        i = 48;
        e = 48;
        g = 48;
        While (e < 48)
        {
                i = 48;
                While (i < 58)
                {
                        g = 48;
                        While (g < 58)
                        {
                                if (e != i && e != g && i != g && e < i && i < g)
                                {
                                        putchar(e);
                                        putchar(i);
                                        putchar(g);
                                        if (i == 56 && e == 55 && g == 57)
                                        {
                                                break;
                                        }
                                        putchar(',');
                                        putchar(' ');
                                         
                                }
                                g++;
                       }
                       i++;
               
                }
                e++;
         }
         putchar(' ');
         return (0);
}
        
