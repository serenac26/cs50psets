/*
    credit.c
    Author: Serena Cheng
    Date: 7.11.15
    Accepts a credit card number input from user 
    and checks if it is valid and then prints 
    the type of credit card--American Express, Visa,
    or Mastercard. If invalid, prints invalid.
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    printf("Enter credit card number: \n");
    long long num1 = GetLongLong();
    long long num = num1;
    long long num2 = num1;
    int r1;
    long long d1;
    int r2;
    long long d2;
    int sum1 = 0;
    int sum2 = 0;
    int digits = 0;
    
    //Calcuates number of digits in card number
    do
    {
        digits++;
        num1 /= 10;
    }
    while (num1 >= 1);
    
    //Stores each digit depending on even or odd position
    //for further calculation.
    do
    {
        r1 = num % 10;
        d1 = num / 10;
        sum1 += r1;
        r2 = d1 % 10;
        d2 = d1 / 10;
        r2 *= 2;
        if (r2 >= 10)
        {
            r2 = (r2 % 10) + 1;
        }
        num = d2;
        sum2 += r2;
    }
    while (num > 9);
    
    //Adds first digit of odd digited card numbers to 
    //the sum of non doubled digits.
    sum1 += (int)d2;
    
    //Calculates total sum of doubled and non doubled digits.
    int sum = sum1 + sum2;
    
    //Calculates the first and second digits of each card number.
    int firstdig = (int)(num2 / pow(10.0, digits-1));
    int seconddig = (int)((num2 / pow(10.0, digits-2))) % 10;
    
    //Checks number of digits and first and/or second digits of each card number,
    //then prints card type or invalid based on conditions met.
    if (sum % 10 == 0)
    {
        if (digits == 15 && firstdig == 3 && (seconddig == 4 || seconddig == 7))
        {
            printf("AMEX\n");
        }
        else if (digits == 13 && firstdig == 4)
        {
            printf("VISA\n");
        }
        else if (digits == 16)
        {
            if (firstdig == 4)
            {
                printf("VISA\n");
            }
            else if (firstdig == 5 && seconddig > 0 && seconddig < 6)
            {
                printf("MASTERCARD\n");
            } 
        }
        else 
        {
            printf("INVALID\n");
        }
    }
    else 
    {
        printf("INVALID\n");
    } 
}    
    
    
    
