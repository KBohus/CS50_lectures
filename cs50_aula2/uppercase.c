#include <cs50.h>
//#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string s = get_string("Before: ");
    printf("After: ");
    
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        //apagar if/else e colocar apenas printf("%c", tupper(s[i]));  que é o suficiente
        if (s[i] >= 'a' && s[i] <= 'z') //change to if (islower (s[i]))
        {
            printf("%c", s[i] - 32);   //change to printf("%c", tupper(s[i])); 
        }
        else
        {
            printf("%c", s[i]); 
        }
        
    }
    printf("\n");
}
