#include <cs50.h>
#include <stdio.h>

//Prototype 
int get_negative_int(void);

int main (void)
{
    // Get negative integer from user
    int i = get_negative_int();
    printf("%i\n",i);
}

int get_negative_int (void)
{
    int n;
    do
    {
        n = get_int("Negative integer:");
    }
    while (n < 0); //change to n>=0, and the loop will work
    return n;
}