 #include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> //to use strcpy
#include <string.h>


int main(void)
{
    char *s = get_string("s: ");


    char *u = malloc (strlen(s)+1); //só copia s e transforma u em maiusc.

    if (u == NULL) // para não dar erro na memória caso falte espaço...malloc tbm só dá o endereço do primeiro char
                   // NULL não representa \0 e sim um null pointer (endereço falso ou a ausência de um endereço)
    {
     return 1; // se não possui espaço, ele sai do programa
    }

    for (int i = 0, n = strlen(s); i <= n; i++) // <= por causa do null char
   {
      u[i] = s[i]; // copy each char from s em u
                   // outro jeito de escrever u[i] = s[i] é: *(t+i) = *(s+i)
   }

    if (strlen(u) > 0)
   {
       u[0] = toupper(u[0]);
   }
    printf("u: %s\n", u);

 free(u);
}