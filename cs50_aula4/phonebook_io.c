//what's new? FILE (novo tipo de dados que representa um arquivo), fopen (file open), fprintf, fclose
//um arquivo .csv foi criado ao rodar o programa
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv", "a"); // a de append para continuar adicionando linha por linha, pode ser ler ou escrever arquivo tbm
    if (file == NULL)
    {
        return 1;
    }
    
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");
    
    fprintf(file,"%s, %s\n", name, number); 
    
    fclose(file);
}