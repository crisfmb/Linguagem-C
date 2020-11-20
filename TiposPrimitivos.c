// Tipos primitivos in english Data Types in C - Aula M01A03 – Tipos Primitivos

/* 
formatação
%d - int
%f - float/double
%c - char
%s - string
%e - notação
%hd - short int
%ld - long int
%hu - unsigned short
%u - unsigned
%lu - unsigned long

*/
#include <stdio.h>

int main()
{
    printf("A %s tem %i anos!", "Cristina Borges", 28);
    printf("Seu peso atual é de: %.2fKg ", 65.345456);
    printf("O seu sexo é %c", 'F');

    return 0;
}