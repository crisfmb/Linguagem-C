#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int var1;

    printf("Digite um valor: ");
    scanf("%d", &var1);

    if (var1 % 2 == 0)// a porcentagem significa resto da divisão, se o RESTO DA DIVISÃO. Se quiser mostrar o impar primeiro troca o valor do Resto da divisão pra 1.
    {
        printf("O número digitado %d é Par", var1); // Imprime que o valor é par
    }
    else
    {
        printf("O número digitado %d é Impar", var1);// Imprime que o valor é impar
    }
}