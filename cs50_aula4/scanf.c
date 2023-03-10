#include <stdio.h>

int main(void)
{
    char s[4]; //melhor usar char *s = malloc com memmoria alocada o suficiente e free no fim
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}

//tente escrever uma frase, ela sera cortada