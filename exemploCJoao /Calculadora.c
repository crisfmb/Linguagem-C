/* Faça um algoritmo em linguagem C que recebe como entrada dois valores reais (X e Y) e uma opção de operação matemática via teclado do usuário.
1-Adição, 2-Subtração, 3-Divisão, 4-Multiplicação. O programa deverá retornar o resultado da operação recebida sobre estes dois números.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    float x;
    float y;
    float opcao;
    float resultado;

    printf("Digite o primeiro valor: ");
    scanf("%f", &x);
    printf("digite o segundo valor: ");
    scanf("%f", &y);

    printf("Qual operação deseja fazer: \n");
    printf("1-Adição \n");
    printf("2-Subtração \n");
    printf("3-Multiplicação \n");
    printf("4-Divisão \n");
    scanf("%f", &opcao);

    if (opcao == 1)// se a pessoa digitar numero 1 faz o calculo e termina o programa
    {
        resultado = x + y;// faz a soma como ta ali em cima
        printf("%.2f", resultado);
    }
    else if (opcao == 2)// se o numero selecionado for 2 executa a subtração
    {
        resultado = x - y;
        printf("%.2f", resultado);
    }
    else if (opcao == 3)// se o numero selecionado for 3 executa a subtração
    {
        resultado = x * y;
        printf("%.2f", resultado);
    }
    else if (opcao == 4) // se o numero selecionado for 4 executa a subtração
    {
        resultado = x / y;
        printf("%.2f", resultado);
    }
    else// se o usuario digitar uma opção inválida imprime a mensagem abaixo
    {
        printf("Opção invalida");
    }

    return 0;
}
