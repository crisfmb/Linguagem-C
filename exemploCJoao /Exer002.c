/* Faça um algoritmo em linguagem C que recebe como entrada dois valores reais (X e Y) e uma opção de operação matemática via teclado do usuário e informe qual deles é o maior ou se eles são iguais. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    float x, y;

    printf("Digite o primeiro número: ");
    scanf("%f", &x);

    printf("Digite o segundo número: ");
    scanf("%f", &y);
    printf("Você digitou o valor %.2f e %.2f \n", x, y);

    if (x > y)
    {
        printf("%.2f > %.2f", x, y);
    }
    else if (y > x)
    {

        printf("%.2f > %.2f", y, x);
    }
    else
    {
        printf("Os dois valores são iguais");
    }

    return 0;
}