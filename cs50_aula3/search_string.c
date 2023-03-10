#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};
    
    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        //if (strings[i] == s) is not gonna work as strings is an array and the == isn't going to compare all the characters
        if (strcmp(strings[i], s) == 0)//does the return value of a function called string compare strcmp = 0 when passed in the current string and that user input
        {
            printf("Found\n");
            return 0;
        }
        
    }
    printf("Not found\n");
    return 1;
    
}