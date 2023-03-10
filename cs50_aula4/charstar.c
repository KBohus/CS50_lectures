//cs50 excluded, string is again char*
#include <stdio.h>

int main(void)
{
    char *s = "HI!";
    printf("%s\n", s); 
    printf("%p\n", s); //string address
    printf("%p\n", &s[0]); // string address per character
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
 
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]);
    printf("%i\n", s[3 // \0 as int
    
    printf("%c\n", *s); //new pointer arithmetic
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
    printf("%i\n", *(s+3));// \0 as int
    

}