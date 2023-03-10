#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");
    
    printf("%s\n", s);
    printf("%p\n", s);
    printf("%s\n", t);
    printf("%p\n", t);
    
    if (strcmp(s, t) == 0) // o valor de retorno de strcmp é 0 = igual, negat se vier anter do outro e posit se vier depois como na ordem asciibetic.
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}