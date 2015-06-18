/**
 * greedy.c
 * This program is a simple change maker, taking a user input
 * dollar amount, rounding it to the nearest cent, and giving
 * the least number of coins needed to make change.
 * Author: Samuel Cheng
 * Date: 20140913
 *************************************************************/

#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // These constant variables hold integer values for the
    // four denominations of coins used, quarter, dime, nickel
    // and penny
    const int q = 25,
              d = 10,
              n = 5,
              p = 1;
    
    // Will hold numbers of each coin during counting
    int nCoins,
        nQuarters,
        nDimes,
        nNickels,
        nPennies;
    
    printf("How much change is needed?\n");
    float change = GetFloat();
    
    // Read user input as a float
    while (change < 0)
    {
        printf("Cannot have negative change!\n");
        printf("How much change is owed?\n");
        change = GetFloat();
    }
    
    // If no change is needed, program exits
    if (change == 0)
    {
        printf("No change is owed!\n");
        return 0;
    }
    else
    {
        change = change * 100;
        int nChange = (int) round(change); // Convert the input float into an int for easier math
        
        // Count each denomination of coin separately, going from
        // largest to smallest to ensure the total number of coins
        // is minimized
        nQuarters = nChange / q;
        nChange = nChange - (nQuarters * q);
        nDimes = nChange / d;
        nChange = nChange - (nDimes * d);
        nNickels = nChange / n;
        nChange = nChange - (nNickels * n);
        nPennies = nChange / p;
        nChange = nChange - (nPennies * p);
        
        nCoins = nQuarters + nDimes + nNickels + nPennies;
    }
    
    printf("You need %i coin\(s)\n", nCoins);
    return 0;
}
