//Detects if a file is a JPEG
//Run the program as ./jpeg nomedafigura.formato(ex ./jpeg cat.)

#include <stdint.h>
#include <stdio.h>

typedef uint8_t BYTE; //declara um datatype chamado byte

int main(int argc, char *argv[])
{
 //check usage
 if (argc != 2) // se o user digitar algo diferente de dois argumentos, retorna
 {
     return 1;
 }
 
 //open a file
 FILE *file = fopen(argv[1], "r"); // abre um arquivo usando o segundo argumento, r pois somente read o arquivo
 if (!file) // se não houver um file.....!file e file == NULL são a mesma coisa
 {
     return 1;
 }
 
 //read the first three bytes
 BYTE bytes [3]; //buffer de 3 bytes
 fread(bytes, sizeof(BYTE), 3, file);
 
 //check first three bytes
 if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
 {
     printf("Maybe\n");
 }
 else
 {
     printf("No\n");
 }
}