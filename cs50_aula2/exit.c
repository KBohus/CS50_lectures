#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2) // programa checa se foram colocadas 2 palavras na linha de comando e se não, irá imprimir mensagem de erro (tente echo $? após entrar comando)
    {
        printf("Missing command-line argumments\n");
        return 1;
    }
    printf("hello %s\n", argv[1]);
    return 0;
    
}