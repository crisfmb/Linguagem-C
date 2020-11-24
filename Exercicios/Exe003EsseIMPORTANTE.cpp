#include <stdio.h>

int main()
{
    char nome[20];
    int idade;
    float peso;

    printf("Qual seu nome? \n");
    gets(nome);
    printf("qual é a sua idade? \n");
    scanf("%d", &idade);
    printf("Qual seu peso? \n");
    scanf("%f", &peso);

    printf("\n<=====PROCESSANDO====>\n");
    printf("Muito Prazer, %s. Você tem %d anos e pesa %.2f KG, correto?\nFIM", nome, idade, peso);
    return 0;
}