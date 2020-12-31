/* Escreva um programa em C que leia um valor digitado pelo usuário e imprima na tela a tabuada daquele valor vezes 1 a 10. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int numero;
    int i = 1;
    int resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);

    do
    {
        resultado = numero * i;
        printf("%d x %d = %d \n", numero, i, resultado);
        i++;
    } while (i <= 10);
}