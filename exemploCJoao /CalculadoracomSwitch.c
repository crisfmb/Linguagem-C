/* Faça um algoritmo em linguagem C que recebe como entrada dois valores reais (X e Y) e uma opção de operação matemática via teclado do usuário.
1-Adição, 2-Subtração, 3-Divisão, 4-Multiplicação. O programa deverá retornar o resultado da operação recebida sobre estes dois números.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");//limpa a tela quanto executa novamente
    float x;
    float y;
    int opcao;
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
    scanf("%d", &opcao);

    switch (opcao){// switch case é uma condicional, pode utilizar em menu pois e um valor fixo
    case 1: // se a opção selecionada for a 1 faz o calculo de soma ou qualquer outra operação e imprime o valor
        resultado = x + y;
        printf("%.2f", resultado);
        break;
    case 2:// se a opção selecionada for a 2 faz o calculo de soma ou qualquer outra operação e imprime o valor
        resultado = x - y;
        printf("%.2f", resultado);
        break;
    case 3:
        resultado = x * y;
        printf("%.2f", resultado);
        break;
    case 4:
        resultado = x / y;
        printf("%.2f", resultado);
        break;
    default:// se não for nenhuma das opções acima imprime opcao invalida
        printf("Opção invalida");
        break;
    }

    return 0;
}
