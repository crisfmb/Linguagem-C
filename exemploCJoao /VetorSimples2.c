/*Cria um algoritmo com um vetor com os valores de 1 a 5, imprima todos os valores usando o laço de repetição for 
e no final mostre o resultado da soma deles*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int valores[5] = {1, 2, 3, 4, 5}; //predefinindo os valores do vetor
    int i;
    int soma; // armazena a soma do vetor

    for (i = 0; i < 5; i++) // percorre o vetor valores
    {
        printf("\n%d", valores[i]); // imprime os valores do vetor que foram predefinidos
        soma = soma + valores[i];   // a soma recebe o último valor de soma somado com o valor atual que o for esta percorrendo no vetor.
    }
    printf("\nSoma: %d", soma); //imprime a soma de todos ps valores

    return 0;
}