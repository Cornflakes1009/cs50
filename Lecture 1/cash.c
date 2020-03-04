#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(int argc, string argv[])
{
    float changeDue = get_float("Change owed:\n");
    while(changeDue <= 0)
    {
        changeDue = get_float("Change owed:\n");
    }

    // Removing the whole numbers
    while(changeDue >= 1) 
    {
        changeDue = changeDue - 1;
    }

    // Converting the float to an int
    int cents = round(changeDue * 100);
    // Setting a counting variable
    int coinsCount = 0;

    while(cents > 0)
    {
        while(cents - 25 >= 0)
        {
            cents = cents - 25;
            coinsCount++;
        }

        while(cents - 10 >= 0)
        {
            cents = cents - 10;
            coinsCount++;
        }

        while(cents - 5 >= 0)
        {
            cents = cents - 5;
            coinsCount++;
        }

        while(cents - 1 >= 0)
        {
            cents = cents - 1;
            coinsCount++;
        }
    }
    printf("%i\n", coinsCount);
}
