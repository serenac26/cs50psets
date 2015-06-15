#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;

    do
    {
        printf("Integer height of pyramid between 0 and 23: ");
        h = GetInt();
    }
    while (h<0 || h>23);
            
    for (int i=0; i<h; i++)
    {    
        int spacecount = h-1-i;
        if (spacecount>0)
            printf("%*c", spacecount, ' ');
                
        for (int j=0; j<i+2; j++)
        {
            printf("#");
    
        }
        printf("\n");
    }
}   
