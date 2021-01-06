#include <stdio.h>
#include <stdlib.h>

int main()
{

    int gaveta;
    gaveta = 5;

    //criadoMudo = [1,15,150];
    int criadoMudo[3];
    criadoMudo[0] = 1;
    criadoMudo[1] = 15;
    criadoMudo[2] = 150;

    /* vetor ler 3 notas e exibir
    int notas[3];

    printf("Digite a nota:");
    scanf("%d", &notas[0]);

    printf("\nDigite a segunda nota:");
    scanf("%d", &notas[1]);

    printf("\nDigite a terceira nota:");
    scanf("%d", &notas[2]);

    printf("'Notas Lidas: %d %d %d ", notas[0], notas[1], notas[2]);*/

    int tamanho = 3;
    int resultados[3];
    int i;
    for (i = 0; i < 3; i++)// percorre o vetor resultado lendo os valores
    {
        printf("Digite o resultado: ");
        scanf("%d", &resultados[i]);
    }

    for (i = 0; i < 3; i++)// imprime os resultados do vetor
    {
        printf("\n%d", resultados[i]);
    }

    int valores[3] = {0,10,25};
    printf("%d", valores[1]);


    return 0;
}
