#include <stdio.h>

int main()
{
    int numero;
    int dobro;
    float tercaparte;

    printf("Difite um número: ");
    scanf("%d", &numero);

    dobro = numero * 2;
    tercaparte = numero / 3;

    printf("Analisando o número %d, eu vejo que o dobro é %d e a terça parte é %.2f", numero, dobro, tercaparte);

    return 0;
}