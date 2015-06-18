/**
 * Graded 2015-06-18 by Samuel Cheng
 *
 * Scope        3/3
 * Correctness  4/5
 * Design       1/2
 * Style        1/2
 *
 */

// @sam no header
// @sam no comments throughout
// @sam magic numbers used throughout, DO NOT DO THIS

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float c;                                                                // name variables meaningfully
    do
    {
        printf("How much change is owed? ");
        c = GetFloat();
    }
    while (c<0);
    
    float cc = roundf(c*100);                                               // incorrect use of roundf(), check man page
    float q = floorf(cc/25);                                                // unnecessary use of float, should use int
    float firstr = cc-(q*25);                                               // unnecessary use of float and new variable
    float d = floorf(firstr/10);                                            //     use a temporary variable and do not re-declare
    float secondr = firstr-(d*10);
    float n = floorf(secondr/5);
    int thirdr = secondr-(n*5);
    int p = thirdr;
        
    float totalcoins = q+d+n+p;                                             // very unnecessary use of float and printf formatting
    printf("%.0f\n", totalcoins);
}
