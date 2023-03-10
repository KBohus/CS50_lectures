// identificar de onde o erro vem ::                make: *** No rule to make target 'cp'.  Stop. 
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    //Ensure proper usage
    if (argc != 3)
    {
        fprintf(stderr, "Usage: copy SOURCE DESTINATION\n");
        return 1;
    }
    
    //open input file
    FILE *source = fopen(argv[1],"r");
    if (source == NULL)
    {
        printf("Could not open %s.\n", argv[1]);
        return 1;
    }
  
    //open output file
    FILE *destination = fopen(argv[2],"w");
    if (destination == NULL)
    {
        fclose(source);
        printf("Could not create %s.\n", argv[2]);
        return 1;
    }
    
    //sopy source to destination, one BYTE at a time
    BYTE buffer; //variavel temporaria
    while (fread(&buffer, sizeof(BYTE), 1, source))
    {
        fwrite(&buffer, sizeof(BYTE), 1, destination);
    }
    
    //close files
    fclose(source);
    fclose(destination);
    return 0;
}