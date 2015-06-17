#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float c;
    do
    {
        printf("How much change is owed? ");
        c = GetFloat();
    }
    while (c<0);
    
    float cc = roundf(c*100);
    float q = floorf(cc/25);
    float firstr = cc-(q*25);
    float d = floorf(firstr/10);
    float secondr = firstr-(d*10);
    float n = floorf(secondr/5);
    int thirdr = secondr-(n*5);
    int p = thirdr;
        
    float totalcoins = q+d+n+p;
    printf("%.0f\n", totalcoins);
}
