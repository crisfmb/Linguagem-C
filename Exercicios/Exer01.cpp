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
    char nome[20];
    int idade;
    float peso;

    printf("What's your name? ");
    scanf("%[^\n]", nome);

    printf("How old are you?\n ");
    scanf("%d", &idade);

    printf("Are you FAT?\n ");
    scanf("%f", &peso);

    printf("Muito prazer, %s. Você tem %d anos e pesa %.1f Kg", nome, idade, peso);

    return 0;
}