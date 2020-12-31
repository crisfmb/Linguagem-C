// Crie um algoritmo que imprime os números de 1 a 10.

#include <stdio.h>
#include <stdlib.h>

int main()
{

    //while
    system("clear");//limpa a tela quanto executa novamente
    /* int i = 0;// i e uma variavel padrao
    while (i <= 10)//enquanto o i for menor ou igual a 10 ele o imprime ovalor de i
    {
        printf("%d \n", i);
        i = i + 2;//o valor de i tona-se o valor atual mais 2. Aqui ele conta somente os números pares por isso é 2.
    }*/

    /* int j = 0;

    do //ele vai executar o bloco primeiro e depois ele vai analisar a condição  j<10
    {
        printf("%d \n", j);
        j = j + 1;
    } while (j < 10);*/

    int k;
    for (k = 0; k <= 10; k++)// o valor de k vai de zero e vai ate 10 adicionando mais 1
    {
        printf("%d \n", k);
    }

    return 0;
}