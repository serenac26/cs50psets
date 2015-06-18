/**
 * mario.c
 * This program takes a user inputted positive integer
 * no greater than 23 and prints out a "Mario pyramid"
 * with "#"
 * Author: Samuel Cheng
 * Date: 20140913
 *****************************************************/

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Give me a positive number less than 24\nHeight: ");
    
    int height = GetInt();
    // Make sure the user input is within the acceptable bounds
    while (height >= 24 || height <= 0)
    {
        printf("That is not an acceptable value!\nHeight: ");
        height = GetInt();
    }
    
    // Outer loop controls the height of the pyramid
    for (int i = 0; i < height; i++)
    {
        // Inner loops control number of " " and "#" printed
        for (int j = height - i; j > 0; j--)
        {
            printf(" ");
        }   
        for (int k = 0; k < i + 2; k++)
        {
            printf("#");
        }
        
        printf("\n");
    }
}
