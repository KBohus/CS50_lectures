#include <cs50.h>
#include <stdio.h>

//Pode ser feito com int main (void){printf("###\n");printf("###\n");printf("###\n");} mas não é refinado

int main (void)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        { 
            printf("#");
        }
    printf("\n"); 
    }
}
