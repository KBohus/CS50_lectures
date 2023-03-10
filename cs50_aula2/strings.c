#include <cs50.h>
#include <stdio.h>
//#include <string.h>

int main (void)
{
    string s = get_string("Input: ");
    printf("Output: ");

    for (int i = 0; s[i] != '\0'; i++) // change s[i] != '\0' for i < strlen(s) --> string length or ,n = strlen(s); i < n
    {
        printf("%c", s[i]); //tente trocar %c por %i, e verá caracteres ASCII
    }
    printf("\n");
}