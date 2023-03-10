#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if (argc == 2) // se numero de argumentos do programa = 2
    {
        printf("Hello %s\n", argv[1]); //imprima hello %s e conecte com o que quer que seja esse argv[1]
    }
    else
    {
        printf("Hello world \n");
    }
}

//ative o programa com ./argv nome (mas só uma palavra, pois ele conta o nome do programa tbm) ou entäo será cumprimentado com hello world