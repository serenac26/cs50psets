#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[1])
{
    if (argc != 2)
    {   
        printf("Please enter a keyword in the command line argument\n");
        return 1;    
    }
    else 
    {
        for (int a = 0; a < strlen(argv[1]); a++)
        {
            if (!isalpha(argv[1][a]))
            {
                printf("Only letters in keyword please\n");
                return 1;
            }
        }
        string message = GetString();
        string k = argv[1];
        for (int j = 0, m = strlen(message); j < m; j++)
        {
            int i = (j%strlen(k));
            if (message[j] > 96 && message[j] < 123)
            {
                int lc = ((int)message[j]-96+(int)toupper(k[i])-65)%26;
                if (lc == 0)
                {
                    printf("z");
                }
                else
                {
                printf("%c", lc+96);                    
                }                                  
            }
            else if (message[j] > 64 && message[j] < 91)
            {
                int uc = ((int)message[j]-64+(int)toupper(k[i])-65)%26;
                if (uc == 0)
                {
                    printf("z");
                }
                else
                {
                printf("%c", uc+64);
                }        
            }
            else 
            {
                printf("%c", message[j]);
            }
        }     
    }
    printf("\n");
    return 0;
}


