
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;
     
    printf("x is %i, y is %i\n", x, y);
     
    swap(x,y);
    printf("x is %i, y is %i\n", x, y);

}

void swap(int a, int b)
//exemplo dos 2 copos (endereço) e seus respectivos liquidos (x e y), precisam de um terceiro copo para trocar os liquidos de copos 
{
    printf("a is %i, b is %i\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("a is %i, b is %i\n", a, b);
}