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
    char nome[30];
    char endereco[40];
    printf("Digite o seu nome: ");
    gets(nome);

    printf("Digite o seu endereço: ");
    gets(endereco);
    printf("O seu nome completo é: \"%s\" e o seu endereço é: \"%s\" ", nome, endereco);
}