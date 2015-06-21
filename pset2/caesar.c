
/**
    *caesar.c
    *Program enrypts an inputted message using Caesar's 
    *cipher by rotating each letter a "k" number of 
    *positions. "k" is inputted in the command-line argument.
    *Author: Serena Cheng
    *Date: 6.21.15
 *********************************************************/

#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int main(int argc, string argv[1])
{
    // Tells user to enter one command line argument besides
    // the file name if there are zero or more than two arguments.
    // Exits code. 
    if (argc != 2)
    {
        printf("Please enter a key in the command-line\n");
        return 1;
    }
    // Takes command line argument from user and stores it as an 
    // integer, then takes inputted message and stores it as a string. 
    else 
    {
        int k = atoi(argv[1]);
        string message = GetString();
        // Sets parameters for the number of iterations of the for loop
        // based on the number of characters in the message.  
        for (int i = 0, n = strlen(message); i<n; i++)
        {
            // Checks if the "i"th character of the message is lower case
            if (96 < message[i] && message[i] < 123)
            {
                // Performs calculations on the ASCII binary integer 
                // representations of lower case letters to redefine
                // them on a list from 1-26.
                int x = ((int)message[i]-96+k)%26;
                // After the above calculation, z is represented as 0
                // so it will not be printed correctly if it continues
                // through the code. 
                if (x==0)
                {
                    printf("z");
                }
                else
                {
                    // Reverts the integer codes of the letters back to
                    // the ASCII scheme and prints the encrypted letter
                    // using its binary representation.
                    int lc = x+96;
                    printf("%c", lc);
                }
            }  
            // Checks if the "i"th charcter of the message is upper case
            else if (64 < message[i] && message[i] < 91)
            {
                // Same as previous mirror statement (int x = ((int)message[i]-96+k)%26;)
                int y = ((int)message[i]-64+k)%26;
                // Same as previous mirror statement (if (x==0))
                if (y==0)
                {
                    printf("z");
                }
                else
                {
                    // Same as previous mirror statement (int lc = x+96;)
                    int uc = y+64;
                    printf("%c", uc);
                }
            }  
            // For all non-letter characters, reprint them as they appear. 
            else 
            {
                printf("%c", message[i]);
            }
        }
        printf("\n");
    } 
    return 0;
}
