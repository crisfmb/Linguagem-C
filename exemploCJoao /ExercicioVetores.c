/* Crie um algoritmo com um vetor com as letras [a,b,c,d,e,i,u,f,p,o] percorra ele com um laço de repetição e imprima na tela apenas quando for uma vogal 

1- criar um vetor com os valores definidos
2- cria um for para percorrer cada letra do vetor
3- imprimir as letras
4- criar uma condição para imprimir apenas quando for vogal
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    char letras[10] = {'a', 'b', 'c', 'd', 'e', 'i', 'u', 'f', 'p', 'o'}; //predefinindo os valores do vetor
    int i;

    for (i = 0; i < 10; i++) //percorre o vetor letras
    {

        if (letras[i] == 'a' || letras[i] == 'e' || letras[i] == 'i' || letras[i] == 'o' || letras[i] == 'u') //se a letra analisada na posição atual do vetor for a OU e OU i OU o OU u imprime as vogais
        {
            printf("\nVOGAL: %c", letras[i]); //imprime as vogais
        }
    }
}
