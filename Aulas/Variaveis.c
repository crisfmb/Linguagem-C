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
    unsigned int idade = 33;
    float peso = 75.984;
    char sexo = 'F';
    char nome[] = "Cristina";

    printf("%s é do sexo %c tem %i anos e pesa %.1fKg", nome, sexo, idade, peso);

    return 0;
}
