/**
 * Graded 2015-06-18 by Samuel Cheng
 *
 * Scope        3/3
 * Correctness  5/5
 * Design       1/2
 * Style        1/2
 *
 */

// @sam missing header
// @sam missing author comments throughout - you need these to explain your code,
//      no matter how simple it is

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;                                                              // name variables meaningfully,
                                                                        // not just letters
    do
    {
        printf("Integer height of pyramid between 0 and 23: ");
        h = GetInt();
    }
    while (h<0 || h>23);
            
    for (int i=0; i<h; i++)                                             // style: put spaces around operators
    {                                                                   // e.g. "int i = 0"
        int spacecount = h-1-i;                                         // use camelCase, e.g. spaceCount
        if (spacecount>0)
            printf("%*c", spacecount, ' ');
                
        for (int j=0; j<i+2; j++)
        {
            printf("#");
                                                                        // style: no extra whitespace
        }
        printf("\n");
    }
}   
