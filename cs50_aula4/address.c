#include <stdio.h>


int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%i\n", n); //impime n
    printf("%p\n", &n); //mostra localização na memória de n
    printf("%i\n", *&n); // * anula &
    printf("%p\n", p);
    printf("%i\n", *p);
}
