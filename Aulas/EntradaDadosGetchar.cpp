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

    char r;
    char s;
    printf("Digite so uma letra: ");
    fflush(stdin); // tem que usar o pra limpar o buffer de memoria pra ler caracteres ou strings
    r = getchar();
    printf("Digite outra letra: ");
    fflush(stdin); //também funciona se colocar um espaço antes da % no scanf tipo - scanf(" %c", &s);
    s = getchar();
    printf("Você digitou as letras %c e %c", r, s);

    return 0;
}