#include <cs50.h>
#include <stdio.h>

void draw(int n); 
int main(void)
{
    int height = get_int("Height: ");
    draw (height);
}

void draw(int n) //criar função draw sem valor de retorno (void), receberá valor n de entrada
{
    for (int i = 0; i < n; i++) //iterates linha por linha
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}