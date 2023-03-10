#include <stdio.h>

int main (void)
{
    //print 10 hashes, but prints 11... i<=10 should be i<10... try debug50!!:D
    for (int i = 0; i <= 10; i++)
    {
        printf("i is now %i\n",i);
        printf("#\n");
    }
}

