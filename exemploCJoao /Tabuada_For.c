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

    for (i = 1; i <= 10; i++)// o valor de k vai de zero e vai ate 10 adicionando mais 1
    {
        resultado = numero * i;// faz a operação da tabuada o numero digitado multiplicado por i
        printf("%d x %d = %d \n", numero, i, resultado);
    }
}