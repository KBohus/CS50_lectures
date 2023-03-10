#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(3); //ERRO ask alloc of 3 bits but touching a 4th with s[3] is not ok... change to [4] and it's ok
    s[0] = 'H';
    s[1] = 'I';
    s[2] = '!';
    s[3] = '\0'; //==157== Invalid write of size 1   ==157==    at 0x401171: main (valgrind.c:10) ###touching 4th bit and allocating only 3
    printf("%s\n", s); //==157== Invalid read of size 1 ==157==    by 0x4A49EBE: printf (printf.c:33) ==157==    by 0x401189: main (valgrind.c:11) ###print something with an address you shouldnt be touching
    
    //LEAKS not freeing with "free(s)" memory at the end ==157==     in use at exit: 3 bytes in 1 blocks ==157== 3 bytes in 1 blocks are definitely lost in loss record 1 of 1
    
    //run on terminal valgrind ./valgrind
}