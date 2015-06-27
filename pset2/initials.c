///////////////////////////////////////////////////

    //initials.c 
    //Prints the initials of an user input name.
    //Author: Serena Cheng 
    //Date: 6.26.15
    
///////////////////////////////////////////////////

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string name = GetString();
    if (isalpha(name[0]))
    {
        printf("%c", toupper(name[0]));
    }
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        if (isalpha(name[i]) && (int)name[i-1] == 32)
        {
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
}
